#usr/bin/env python
"""Elabore un script en python utilizando clases facilmente que me permita 
calculas el pago de horas normales trabajadas durante un periodo de n dias
 asi como la suma de horas extras, ademas calcular el pago final, mas los 
 descuentos del mes que incluya renta, isss y afp;
para ello puede pedir por entrada de teclado para el pago por hora y los 
dias trabajados, el pago por hora y los dias trabajados y para el pago de 
las horas extras; las horas extras acumuladas y el pago por hora"""

class datos:
	def dt(self):
		self.ht=float(raw_input("Horas trabajadas: "))
		self.dt=float(raw_input("Dias trabajadas: "))
		self.ph=float(raw_input("Pago por hora: $"))
		self.he=float(raw_input("Horas extras: "))
		self.phe=float(raw_input("Pago por horas extras: $"))
		self.afp=float(raw_input("AFP: $"))
		self.isss=float(raw_input("ISSS: $"))
		self.r=float(raw_input("RENTA: $"))

class pago(datos):
	def calculo(self):
		self.p = self.ht*self.dt*self.ph
		
		
	def extras(self):
		self.ex = self.he*self.phe
		
	def liquido(self):
		self.liqu = self.p - self.isss - self.afp - self.r 
		print "El sueldo por horas extras es: $" + str(self.ex)
		print "El sueldo es: $" + str(self.p)
		print "El sueldo liquido es: $" + str(self.liqu)
s = pago()
s.dt()
s.calculo()
s.extras()
s.liquido()
		

