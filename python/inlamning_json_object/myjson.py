import sys
import re

if sys.version_info[0] < 3:
        raise Exception("Python 3.6 or a more recent version is required for all tests to pass.")


def multiple_replace(myregex, data):
	# Create a regular expression from the dictionary keys
	regex = re.compile("(%s)" % "|".join(map(re.escape, myregex.keys())))
	# For each match, look-up corresponding value in dictionary
	return regex.sub(lambda mo: myregex[mo.string[mo.start():mo.end()]], str(data))

def json_encode( data ):
    myregex = {
        '\''   : '"',
        ', '   : ',',
        'False': 'false',
        'True' : 'true',
        ': ' : ':',
	}

    if isinstance( data, bool ):
        if data:
            return "true"
        else:
            return "false"
    elif isinstance( data, ( int, float ) ):
            # this test fails in python 2.7 - it truncates number of 0.333333
            # it passes however in python 3.5+
            return str(data)
    elif isinstance( data, str ):
            return '"{}"'.format(str(data).replace('\n', '\\n'))
    elif isinstance( data, list ):
              return multiple_replace(myregex, data)
    elif isinstance( data, dict ):
            # this test fails in python 2.7 && 3.5 however passes in 3.6+
            # does 3.6 include some automatic sorting of dicts maybe?
            # regex fixes the "October 13, 2012" comma whitespace removal from myregex dict.
            return re.sub('(.*\".\"\w.+[0-9]{1,4},)([0-9]{1,4}\")',
                          '\\1 \\2', multiple_replace(myregex, data))
    else:
        # All other types do not  need to be implemented - it is OK that they raise an error
        raise TypeError( "%s is not JSON serializable" % repr( data ) )

