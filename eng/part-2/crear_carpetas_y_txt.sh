#!/bin/bash

# Leer los archivos .c en la carpeta actual y crear una carpeta para cada archivo
for file in *.c; do
    folder=$(echo $file | cut -f 1 -d '.')
    mkdir $folder
    
    # Mover el archivo .c a la carpeta correspondiente
    mv $file $folder
    
    # Crear el archivo .txt con el mismo nombre que el archivo .c dentro de la carpeta correspondiente
    touch ${folder}/${folder}.txt
done

# Imprimir mensaje de éxito
echo "¡El script ha sido ejecutado exitosamente!"

