import json

with open("dados.json") as dados: 
    dados = json.load(dados)

    soma = 0
    min = 9999999
    dmin=0
    max = 0
    dmax=0
    med = 0
    ndiasfat = 0
    dmaiorqmedia=0
    
       

for i in dados:
    
    soma = i['valor'] + soma
    if i['valor'] > max:
        max = i['valor']
        dmax = i['dia']
    if i['valor'] > 0 and i['valor'] < min:
        min = i['valor']
        dmin = i['dia']
    if i['valor'] > 0 : ndiasfat = ndiasfat + 1
    

med = soma / ndiasfat


for i in dados:
    if i['valor'] > med : dmaiorqmedia = dmaiorqmedia + 1

    
print (f'O valor minimo de faturamento foi: {min:,.2f} no dia {dmin}')

print (f'O valor maximo de faturamento foi: {max:,.2f} no dia {dmax}')

print(f'O número de dias com faturamento superior à média mensal foi: {dmaiorqmedia:,.2f}')

#print (f'A media de faturamento foi: {med:,.2f}')

#print(f'A soma é: {soma:,.2f}')

#print(f'Quantidade de dias Faturados: {ndiasfat:,.2f}')









    
