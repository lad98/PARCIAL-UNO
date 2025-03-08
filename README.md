# PARCIAL-UNO
**Laura Daniela Jiménez y Juan Felipe Amador**
## INTRODUCCIÓN
Uno de los obejtivos de la programación es automatizar y resolver problemas que generalmente se necesita mucho tiempo, y la programación busca optimizar todo este tipo de situaciones, a continuación se va a resolver el sguiente caso.
El problema consiste en hacer una clasificación de los súbitos (comercientes,artesanos y nobles) en base a las monedas de oro anuales que cada uno gana para poder saber cuánto tributo deben aportar a la corona. Es por esto que se decidieron dividir de la siguiente manera:
  - Los ingresos menores a 10000 monedas de oro no pagarán tributo.
  - Los que ganen más de 10000 pero menos de 50000 monedas de oro deberán pagar el 10% del excedente sobre 10000 monedas.
  - Los que ganen más de 500000 monedas pagarán un 10% de diezmo sobre las primeras 40000 monedas extras y si sobrepasan este tope pagarán el 20% de tributo sobre sus ingresos.
### C++ 
<details>
 <summary>

1.INSTALACIÓN </summary>  
<p> 
 En todos los sistemas operativos
  
 - Se abre un editor de textos</li>
 Para todos los sistemas sirve Visual Studio Code, que se instala buscandolo en el navegador preferido.
 
 1. En Visual Studio Code, se abre el VS Code
 
  2. Seleccione el ícono de la vista Extensiones en la barra de Actividad o utilice el atajo de teclado ( Ctrl+Shift+X ).
    
  3. Buscar 'C++'
     
  4. Seleccione Instalar
     
- Se guarda el archivo
  
-Se guarda con la extensión "nombre_del_archivo".cpp
  
- Se instala el compilador

<b>Windows</b>
1. Descargue usando este enlace directo al instalador de MinGW 
Ejecute el instalador y siga los pasos del asistente de instalación. Tenga en cuenta que MSYS2 requiere Windows 8.1 de 64 bits o una versión más reciente.

2. En el asistente, elija la carpeta de instalación que desee. Registre este directorio para más adelante. En la mayoría de los casos, el directorio recomendado es aceptable. Lo mismo se aplica cuando llega al paso de configuración de accesos directos del menú de inicio. Cuando haya terminado, asegúrese de que la casilla Ejecutar MSYS2 ahora esté marcada y seleccione Finalizar . Se abrirá automáticamente una ventana de terminal MSYS2.

3. En esta terminal, instale la cadena de herramientas MinGW-w64 ejecutando el siguiente comando:
- pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
4. Se mostrará una lista de paquetes disponibles.
-Instalador MYSS2
5. Acepte el número predeterminado de paquetes en el "toolchain" grupo presionando Enter .
Ingrese "Y" cuando se le pregunte si desea continuar con la instalación.
6. Agregue la ruta de su bincarpeta MinGW-w64 a la "PATH" variable de entorno de Windows siguiendo estos pasos:
7. En la barra de búsqueda de Windows, escriba "Configuración" para abrir la Configuración de Windows.
Busque Editar variables de entorno para su cuenta .
En "user variables", seleccione la "Path" variable y luego seleccione Editar .
8. Seleccione "New" y agregue a la lista la carpeta de destino MinGW-w64 que registró durante el proceso de instalación. Si seleccionó los pasos de instalación predeterminados, la ruta es: C:\msys64\ucrt64\bin.
9. Seleccione "Aceptar" y, a continuación, seleccione "Aceptar" nuevamente en la ventana "Variables" de entorno "PATH" para actualizar la variable de entorno.
10. Debe volver a abrir todas las ventanas de la consola para que la
  -"PATH" variable de entorno actualizada esté disponible.
Verifique que sus herramientas MinGW-w64 estén correctamente instaladas y disponibles, abra un nuevo Prompt del sistema y escriba:
gcc --version

g++ --version

gdb --version

**MacOS**

 
 
 
</p>
</details>
<details>
 <summary>2.GUÍA DE USO</summary>  
<p> Se puede interactuar con el por medio de Visual Studio Code con los pasos anteriormente descritos,C++ es un lenguaje de programación compilado, multiparadigma, de tipo imperativo lo que significa que se conoce n cada paso del programa su estado, y esto se da por el valor de las variables usadas, aparte que se puede altearar el programa a través de diversas sentencias, este tiene una programación genérica y funcional.
Algunos ejemplos de uso son:
  
  - Calculadora aritmética de enteros
  
  - Simulación de la multiplicación entera hardware
  
  - Cálculo de la raíz cuadrada mediante el método de bisección
  
  - Mínimo de un vector de enteros
  
  - Invertir el orden de los elementos de un vector
  
  - Insertar un valor o un vector en otro vector manteniendo intacto el original
  
<b>Descripción general de las API de C/C++</b>

  Las API son mecanismos que permiten a dos componentes de software comunicarse entre sí mediante un conjunto de definiciones y protocolos.Las API de C++ son:
  
 -API de C++ de Clinfo: Permite obtener información de estado sobre un clúster de PowerHA SystemMirror for AIX. 

 - API de C/C++ de IBM: Permite acceder a los recursos de IBM i. 

 - API de Helix C/C++: Permite crear aplicaciones que interactúen con Helix Core Server. 

 - API de C++ del programa de arranque: Permite llamar a la API de programa de arranque. 

 - API de C++ de Unreal Engine: Permite explorar las clases y funciones de Engine. 

 - API C++ moderna de RTI Connext: Permite distribuir datos críticos en tiempo real entre dispositivos o nodos. 

 - API de C++ de PyTorch: Amplía la clase ATen Tensor con capacidades relacionadas con la diferenciación automática. 

</p>
</details>
<details>
 <summary> 3.DOCUMENTACIÓN TÉCNICA </summary>  
<p> <b>IOSTREAM</b>
  
C++ proporciona estos recursos básicos a través de la biblioteca de entrada/salida iostream. Esta biblioteca forma parte de la biblioteca estándar de C++.

Para informar al compilador de que deseamos utilizar alguna de las funcionalidades de la biblioteca iostream, es necesario incluir su archivo de cabecera (header file) asociado, típicamente al principio del archivo:

#include <iostream>

  <b>Variables</b>
  
  Los diferentes valores que puede tomar una variable (enteros, reales, caracteres ) que puede manejar un lenguaje se agrupan en tipos. 
  
- bool: para representar valores booleanos, es decir, cierto o falso.
- int: para representar valores enteros.
- double: para valores reales.
- float: para valores reales con pripridad a la parte decimal.
- char: para caracteres.
- string: para cadenas de caracteres.
<b>Variables globales </b>
Son las variables que son conocidas por todo el código
Ej: std::cin (entrada) y std::cout (salida)
<b>Variables locales</b>
Las variables locales son accesibles desde su declaración hasta el final del bloque de código del bloque en el que han sido declaradas.
Los bloques se determinan por {...}
<b>Operadores y sentencias</b>

Un operador es un símbolo que determina la operación a realizar sobre los operandos (variables) a los que afecta de alguna manera. Algunos de ellos son:
- suma (+)
- resta (-)
- multiplicación (*)
- división (/)
- modulo (%)
Una sentencia es un conjunto de expresiones que permiten ejecutar una determinada acción. Alguna de ellas son:
- y (&&)
- o (||)
- no (!) 
- igual (==)
- mayor (<)
- menor (>)
  
<b>Operadores incremento y decremento</b>

Son operadores unarios, es decir, actúan sobre un único operando:

- ++x: operador preincremento, cuando precede al operando
- x++: operador postincremento, cuando sucede al operando
- --x: operador predecremento, cuando precede al operando
- x--: operador postdecremento, cuando sucede al operando
  
<b>Estructuras condicionales</b>

Una sentencia condicional realiza un conjunto u otro de sentencias dependiendo del cumplimiento o no de una determinada condición.

En C++ podemos distinguir diferentes tipos:

- Simple: if
- Ampliada: if - else
- Anidada: if – else if - … - else
- Multisalida: switch

<b>Estructuras iterativas</b>

Las sentencias repetitivas o iterativas permiten repetir una secuencia de instrucciones en tanto no deje de cumplirse una condición.
En C++ disponemos de tres variantes de bucles:

- Bucle: while
  Un bucle while tiene asociado un bloque de sentencias que se ejecutarán secuencialmente mientras la condición de entrada al bucle sea cierta.
- Bucle: do - while
  Un bucle do - while la evalúa al final del bucle, lo implica que el bucle se ejecutará al menos una vez
- Bucle: for está concebido fundamentalmente para ejecutar sus sentencias asociadas un número fijo de veces.
  
</p>
</details>
<summary>
1. ANÁLISIS DEL PROBLEMA </summary>  
<p>  <b>1.1 Descripción del problema</b> 

Los requisitos psrs que el código cumpla con las condiciones dadas, es que cada variable tiene que ser entera, se necesita trabajar con el modelo estándar tanto de Python como de C++, para que se puedan trabajar los bloques de comparación, las operaciones aritméticas, las estructuras de selección y loops, aparte de esto se necesita un compilador o acceso a internet para realizar y ejecutar el código.

Los bloques de comparación se usan para poder establecer condiciones por medio de comparativos viendo si es mayor, menor o igual (con sus conbinaciones), las operaciones aritméticas se usan para cambiar el valor de una variable según un proceso de operaciones necesarias, por su parte las estructuras de selección se usan para que el sistema haga ciertos procesos dependiendo de alguna condición incial y por último se usan los loops para realizar tareas indefinidamente hasta que se cumpla alguna condición y se termine.

Las entradas y salidas del ejercicio son dos, las primera y única es el ingreso de súbdito (respresentado en monedas de oro), la salida del programa es el valor del tributo a pagar con dos decimales (representado en monedas de oro).

El proceso a realizar es según el valor de entrada en el sistema, este debe sacar el porcentaje asignado por el rey y dependiendo el caso mirar por medio de comparaciones y restas el excedente sobre la cantidad de monedas base de cada caso para poder sacar el valor del tributo.

<b>1.2 Justificación de la solución</b>


</p>
</details>

