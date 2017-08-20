totalsegundos = int(input("Por favor, entre com o número de segundos que deseja converter: "))

dia = totalsegundos // (60*60*24)
seg_restante_dia = totalsegundos % (60*60*24)

horas = seg_restante_dia // (60*60)
seg_restante_hora = seg_restante_dia % (60*60)

minutos = seg_restante_hora // 60
seg_restante_minuto = seg_restante_hora % 60

seg_restante_final = seg_restante_minuto % 60

print(str(dia)+' dias, '+str(horas)+' horas, '+str(minutos)+' minutos, e '+str(seg_restante_final)+' segundos.')

