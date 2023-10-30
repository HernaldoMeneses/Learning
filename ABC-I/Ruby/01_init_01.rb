sms_ = "Hello"
sms = "The Matrix has your..."
puts "#{sms_} World!"
puts "#{sms}" 

puts ""
puts "Qual Seu nome"
nome = gets.chomp
puts "Qual é sua idade"
idade = gets.chomp.to_i

puts "Hello #{nome}"
puts "#{nome} tem #{idade} anos"