#compyle by ruby on prompty

'''
Simbolos

Utilizando ids distintos no mesmo espaço de memoria
Otimização de uso da memoria
pra celulares é uma ideia interessante
devido aos tamanhos de memoria geralmentes menores que
os das máquinas Deskctops
'''
#declaração de objetos capazes de fornecer
#ids distintos na mesma posição de memoria
puts :name.object_id
puts :var_name.object_id

#Utilizando os ids
puts "-------------------"
puts :name.object_id

puts "name".object_id
puts "name".object_id
puts "name".object_id
puts "name".object_id
puts "name".object_id
puts "name".object_id
puts "name".object_id
puts "name".object_id
puts "name".object_id
puts "name".object_id
puts "name".object_id
puts "name".object_id

puts :name.object_id
puts "-------------------"
puts "."
puts "-------------------"
puts :var_name.object_id
puts "var_name".object_id
puts "-------------------"

hashes = {name1: "Hernaldo", idade: 30, name2: "Others", idade: 34}
puts hashes
puts "That is All"