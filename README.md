 
   ##### Gitignore

1. ## b)
- El archivo gitignore **especifica los archivos** que se deben ignorar por el **control de versiones** Git
como los archivos temporales creados en ejecucion.
- Cuando decidamos evitar que el servidor cargue archivos no requeridos paar el funcionamiento del proyecto.
- En el buscador del sitio coloca el nombre de los lenguajes de tu proyecto o del IDE que estas utilizando y 
selecciona crear.
Automaticamente te crea todo el contenido que debe ser ignorado por git, copia el contenido al archivo 
.gitignore y listo.
Si faltara algun archivo que no este registrado puedes agregarlo, sin embargo, puede decirte que el 
archivo sale completo.
Es recomedable que si agregas otras tecnologias a tu proyecto generes nuevamente el gitignore antes de
subir los cambios a Git.
- Un archivo gitignore tiene la extension .gitignore, no se coloca nombre solo el tipo de archivo.
Crear un archivo de este tipo en algun editor de codigo, coloca el siguiente codigo. 
###Django 
* .log
* .pot
* .pyc
__pycache__/
local_settings.py
db.sqlite3
# comentarios
* Los archivos con terminacion .log, .poto .pyc seran ignorados, de esta forma agregas los archivos con
un formato especifico.
* _pycache_/ inicia que todo este directorio sea ignorado.
* Para especificar un archivo se coloca el nombre, como local_settings.py.
* Los comentarios con colocados con #.
            
Al crear tu proyecto debes de crear este archivo y posteriormente subir el proyecto a Git o Github. 

2.
- EL resultado es el mismo por que una variable de tipo puntero almacena la direccion de memoria de otra variable apuntada por ella.
- Se obtiene la direccion de memoria del puntero, no es la misma direccion por que cada variable tiene su propia direccion de memoria.