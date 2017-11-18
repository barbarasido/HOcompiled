#1 Pasos de compilacion

1 Pre-procesado:Se encarga de las directivas #, trae a escena a los includes y a las macros, y a todos los que estos ya incluyan.
Tiene sentido hablar de preprocesado en C y C++, no F (Flag -E para detener la etapa)

2 Compilacion I: traduce de lenguaje C a Assembler y a su vez se divide en 3:
    
    front end: Análisis sintáctico, semántico y léxico.Genera una intermediate representation (IR)
    middle end: optimiza el IR (lo cual puedo elegir evitar a partir de la flag -O0)
    back end: genera el codigo de assembler y realiza optimizaciones de hadware

Flag -S para detener el proceso

3 Compilacion II: traduce de assembler a codigo maquina, generando los objetos en binario. (Flag -C)

4 Linkeo: de lenguaje maquina a ejecutable

#2 Que agrego el preprocesado
A todos los includes y macros nombrados luego del #

#3 Identificar en la rutina de assembler las funciones

Veo que el call llama a 3 funciones main, add_numbers y printf

#4 Explicar qué quieren decir los símbolos que se crean en el objeto

en la terminal a partir escribiendo nm calculator.o obtengo:
000000000000003c T add_numbers
0000000000000000 T main
                 U printf

T quiere decir que U quiere decir undifined. No tengo definida a printf dentro del script, cosa que se va a solucionar con el linkeo. Puedo recurrir tanto a lib estaticas como dinamicas, estaticas quiere decir que copio una libreria dentro del programa por lo que a la hora de compilar no va a buscar a la libreria, ya que ya tiene lo que necesita de ella dentro del programa, y dinamica que no se copia al programa sino que cuando se corra el ejecutable ira a buscar a la libreria.

Symbol Type 	Description
A 	The symbol’s value is absolute, and will not be changed by further linking.
B 	Un-initialized data section
D 	Initialized data section
T 	Normal code section
U 	Undefined symbol used but not defined. Dependency on another library.
W 	Doubly defined symbol. If found, allow definition in another library to resolve dependency.



#5 ¿En qué se diferencian los símbolos del objeto y del ejecutable?


    
