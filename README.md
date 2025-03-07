# PARCIAL-UNO
**Laura Daniela Jiménez y Juan Felipe Amador**
## INTRODUCCIÓN
Uno de los obejtivos de la programación es automatizar y resolver problemas que generalmente se necesita mucho tiempo, y la programación busca optimizar todo este tipo de situaciones, a continuación se va a resolver el sguiente caso.
El problema consiste en hacer una clasificación de los súbitos (comercientes,artesanos y nobles) en base a las monedas de oro anuales que cada uno gana para poder saber cuánto tributo deben aportar a la corona. Es por esto que se decidieron dividir de la siguiente manera:
  - Los ingresos menores a 10000 monedas de oro no pagarán tributo.
  - Los que ganen más de 10000 pero menos de 50000 monedas de oro deberán pagar el 10% del excedente sobre 10000 monedas.
  - Los que ganen más de 500000 monedas pagarán un 10% de diezmo sobre las primeras 40000 monedas extras y si sobrepasan este tope pagarán el 20% de tributo sobre sus ingresos.
<details>
 <summary>
1. INSTALACIÓN </summary>  
<p> <b>1. Python </b>
  
 <b> 2.C++ </b>  
 En todos los sistemas operativos
 - Se abre un editor de textos</li>
 Para todos los sistemas sirve Visual Studio Code, que se instala buscandolo en el navegador preferido.
  1. En Visual Studio Code, se abre el VS Code
  2. Seleccione el ícono de la vista Extensiones en la barra de Actividad o utilice el atajo de teclado ( Ctrl+Shift+X ).
  3. Buscar 'C++'
  4. Seleccione Instalar
- Se guarda el archivo 
  Se guarda con la extensión "nombre_del_archivo".cpp
- Se instala el compilador
**Windows**
  Descargue usando este enlace directo al instalador de MinGW 
1. Ejecute el instalador y siga los pasos del asistente de instalación. Tenga en cuenta que MSYS2 requiere Windows 8.1 de 64 bits o una versión más reciente.

2. En el asistente, elija la carpeta de instalación que desee. Registre este directorio para más adelante. En la mayoría de los casos, el directorio recomendado es aceptable. Lo mismo se aplica cuando llega al paso de configuración de accesos directos del menú de inicio. Cuando haya terminado, asegúrese de que la casilla Ejecutar MSYS2 ahora esté marcada y seleccione Finalizar . Se abrirá automáticamente una ventana de terminal MSYS2.

3. En esta terminal, instale la cadena de herramientas MinGW-w64 ejecutando el siguiente comando:

- pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
Copiar
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

