def check_vowels(string):
   vowels = ['A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u']
   for char in string:
      if char not in vowels:
        print("Not accepted")
      break
   else:
      print("Accepted")

string_1 = "tutorialspoint"
string_2 = "AEiouaieeu"
check_vowels(string_1)
check_vowels(string_2)
