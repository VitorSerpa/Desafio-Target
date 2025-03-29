import json

with open('valores.json', 'r') as file: 
    vetor = json.load(file)

maior, menor, soma, media, count, superior_media = None, None, 0, 0, 0, 0
dia_maior, dia_menor = None, None

dicRegistroMaior = {
    "dia" : None,
    "valor" : None
}

for dic in vetor:
    if(dic["valor"] == 0):
        continue
    
    valor = dic["valor"]
    soma += valor
    count += 1

    if maior is None or valor > maior:
        maior = valor
        dia_maior = dic["dia"]
    if menor is None or valor < menor:
        menor = valor
        dia_menor = dic["dia"]

media = soma / count


for dic in vetor:
    if dic["valor"] == 0:
        continue
    
    if dic["valor"] > media:
        superior_media += 1

print(f"Dia com maior faturamento: {dia_maior} com: {maior}")
print(f"Dia com menor faturamento: {dia_menor} com: {menor}")
print(f"Dias com maior faturamento que a media mensal: {superior_media}, Media: {media}")



        