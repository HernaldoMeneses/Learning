#compyle by ruby on prompty

'''
Arrays, Vetores ou Listas
'''

puts ("empyt list")
list = []
puts list

puts "____"
puts "."


puts ("empyt list")
list = [1, 2, 3.5, "Nome ", ["recursive", "list", 10]]
puts list

puts "inserindo valores na lista"
list = []
puts list
list.push("value1", "value4", 1)
puts list
puts "Another way"
list << "Maria"
puts list

list.insert(2, "Insert2 on 1")
puts list

puts list[1..3]

list.delete("Insert on 1")
puts list

puts list.length
#puts list.sort  just for letters
#puts list.last  just for letters
#puts list.first  just for letters

puts "That is All"