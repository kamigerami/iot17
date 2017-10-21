import sys

if sys.version_info[0] < 3:
        raise Exception("Python 3.6 or a more recent version is required for all tests to pass.")


def json_encode( data ):
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
            return '"{}"'.format(data.replace('\n', '\\n'))
    elif isinstance( data, list ):
              return str(data).replace(' ', '').replace("'", '"').replace('False', 'false').replace('True', 'true')
    elif isinstance( data, dict ):
            # this test fails in python 2.7 && 3.5 however passes in 3.6+
            # does 3.6 include some automatic sorting of dicts maybe?
            result_dict = {}
            for key, value in data.items():
                  result_dict[key] = value
            return str(result_dict).replace(': ', ':').replace(', ', ',').replace("'", '"').replace('False', 'false').replace('True', 'true')

    else:
        # All other types do not  need to be implemented - it is OK that they raise an error
        raise TypeError( "%s is not JSON serializable" % repr( data ) )

