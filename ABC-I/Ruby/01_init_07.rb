#compyle by ruby on prompty

'''
hashs
chaves e valores
'''
#declaração de objetos capazes de fornecer
#ids distintos na mesma posição de memoria
puts :name.object_id
puts :var_name.object_id

#Utilizando os ids
puts "-------------------"
hashes = {name1: "Hernaldo", idade: 30, name2: "Others", idade: 34}
puts hashes
puts "-------------------"
puts "."
puts "-------------------"
key_values = {name1: "Hernaldo", idade: 30, name2: "Others", idade: 34}
puts key_values
puts "-------------------"
puts "."
puts "-------------------"
key_values[:altura] = 1.79
puts key_values
puts "-------------------"
puts "-------------------"
puts "."
puts "-------------------"
key_values.delete(:altura)
puts key_values
puts "-------------------"
puts "."
puts "-------------------"
puts key_values == hashes
puts "-------------------"
puts "."
puts "-------------------"
puts key_values.has_value?("Hernaldo")
puts "."
puts key_values.keys
puts "."
puts key_values.values
puts "."
puts key_values.size
puts "."
puts key_values.length
puts "."
puts key_values.clear
puts hashes.clear
puts key_values.has_value?("Hernaldo")
puts "That is All"