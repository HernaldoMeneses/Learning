#compyle by ruby on prompty

'''
case when   !
'''


puts "Escolha um mes, digite e tecle Enter"

mes1 = "Janeiro"
mes2 = "Fevereiro"
mes3 = "Março"

puts mes1, mes2, mes3


x = gets.chomp

case x
when "Janeiro"
    puts "Mes correto"
when "Fevereiro"
    puts "Mes Anterior"
when "Março"
    puts "Mes Anterior -1"
end