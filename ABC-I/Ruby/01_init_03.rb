#compyle by ruby on prompty

'''
AND     &&
OR      ||
NOT     !
'''
puts false

puts "Conectivo E"
puts true && true
puts true && false
puts false && true
puts false && false

puts "Conectivo OU"
puts true || true
puts true || false
puts false || true
puts false || false

puts "Insira um inteiro"
x = gets.chomp.to_i

if x > 10
    puts "X é maior que 10"
elsif x == 10
    puts "igual 10"
else
    puts "X menor que 10"
end