class Song(object):

       def __init__(self, lyrics):
           self.lyrics = lyrics

       def sing_me_a_song(self):
           for line in self.lyrics:
               print(line)

happy_bday = Song(["Happy birthday to you",
                      "I don't want to get sued",
                      "So I'll stop right there"])

bulls_on_parade = Song(["They rally around tha family",
                      "With pockets full of shells"])


white_america = Song(["White america",
                       "We love you...",
			"How many stripes and stars..."])

twp_of_americaz = Song(["We are two of americas most wanted",
			"In the same muthafucking place",
			"At the same muthafucking time..."])
