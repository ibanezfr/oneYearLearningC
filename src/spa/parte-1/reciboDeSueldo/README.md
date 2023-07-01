***
# Cálculo del Sueldo y Recibo de Empleado

Una empresa desea calcular el sueldo de un empleado e imprimir 
su recibo detallando:

- Nombre y Apellido
- Sueldo Básico
- Premio
- Comida
- Viáticos
- Ausentes
- Obra Social (3%)
- Ley 19032 (3%)
- Jubilación (11%)

Por los ausentes, se descuenta un monto fijo por día de ausencia.
Los porcentajes se calculan sobre los montos remunerativos.
Viáticos, premios y comida no se consideran remunerativos.

## Datos a ingresar por el usuario:

1. Nombre completo del empleado (nombreCompleto)
2. Sueldo bruto (sueldoBruto)
3. Monto del premio (premio)
4. Monto por comida (comida)
5. Monto por viáticos (viaticos)
6. Días de ausentes (diasAusentes)
7. Porcentaje de obra social (obraSocial)
8. Porcentaje de ley 19032 (ley19032)
9. Porcentaje de jubilación (jubilacion)

## Cálculos y Descripción del Recibo:

El programa deberá calcular el sueldo neto del empleado después de descontar
los siguientes conceptos:

- Obra Social (obraSocial%)
- Ley 19032 (ley19032%)
- Jubilación (jubilacion%)
- Monto por días de ausencia (diasAusentes * (sueldoBruto / 22))

**Sueldo neto** = sueldoBruto - (sueldoBruto * (obraSocial/100)) 
- (sueldoBruto * (ley19032/100)) - (sueldoBruto * (jubilacion/100))
- (diasAusentes * (sueldoBruto / 22))

## Recibo de Sueldo:

Nombre y Apellido: {nombreCompleto}

Sueldo Básico: {sueldoBruto}

Premio: {premio}

Comida: {comida}

Viáticos: {viaticos}

Ausentes: {diasAusentes}

Obra Social (3%): {sueldoBruto * (obraSocial/100)}

Ley 19032 (3%): {sueldoBruto * (ley19032/100)}

Jubilación (11%): {sueldoBruto * (jubilacion/100)}

Monto por días de ausencia: {diasAusentes * (sueldoBruto / 22)}

**Sueldo Neto**: {sueldoBruto - (sueldoBruto * (obraSocial/100))
\- (sueldoBruto * (ley19032/100)) - (sueldoBruto * (jubilacion/100)) 
\- (diasAusentes * (sueldoBruto / 22))}

***
