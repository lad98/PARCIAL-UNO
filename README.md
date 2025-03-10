# PARCIAL-UNO
**Laura Daniela Jiménez y Juan Felipe Amador**
## INTRODUCCIÓN
Uno de los obejtivos de la programación es automatizar y resolver problemas que generalmente se necesita mucho tiempo, y la programación busca optimizar todo este tipo de situaciones, a continuación se va a resolver el sguiente caso.
El problema consiste en hacer una clasificación de los súbitos (comercientes,artesanos y nobles) en base a las monedas de oro anuales que cada uno gana para poder saber cuánto tributo deben aportar a la corona. Es por esto que se decidieron dividir de la siguiente manera:
  - Los ingresos menores a 10000 monedas de oro no pagarán tributo.
  - Los que ganen más de 10000 pero menos de 50000 monedas de oro deberán pagar el 10% del excedente sobre 10000 monedas.
  - Los que ganen más de 500000 monedas pagarán un 10% de diezmo sobre las primeras 40000 monedas extras y si sobrepasan este tope pagarán el 20% de tributo sobre sus ingresos.
## INFORME ESCRITO
<details>
<summary> ANÁLISIS DEL PROBLEMA </summary>  
<p>  <b>1.1 Descripción del problema</b> 

Los requisitos psrs que el código cumpla con las condiciones dadas, es que cada variable tiene que ser entera, se necesita trabajar con el modelo estándar tanto de Python como de C++, para que se puedan trabajar los bloques de comparación, las operaciones aritméticas, las estructuras de selección y loops, aparte de esto se necesita un compilador o acceso a internet para realizar y ejecutar el código.

Los bloques de comparación se usan para poder establecer condiciones por medio de comparativos viendo si es mayor, menor o igual (con sus conbinaciones), las operaciones aritméticas se usan para cambiar el valor de una variable según un proceso de operaciones necesarias, por su parte las estructuras de selección se usan para que el sistema haga ciertos procesos dependiendo de alguna condición incial y por último se usan los loops para realizar tareas indefinidamente hasta que se cumpla alguna condición y se termine.

Las entradas y salidas del ejercicio son dos, las primera y única es el ingreso de súbdito (respresentado en monedas de oro), la salida del programa es el valor del tributo a pagar con dos decimales (representado en monedas de oro).

El proceso a realizar es según el valor de entrada en el sistema, este debe sacar el porcentaje asignado por el rey y dependiendo el caso mirar por medio de comparaciones y restas el excedente sobre la cantidad de monedas base de cada caso para poder sacar el valor del tributo.

<b>1.2 Justificación de la solución</b>

Primero, el problema se divide en 3 partes:

1.2.1 Las personas que ganan 10.000 monedas de oro o menos: No pagan tributo

1.2.2 Las personas que ganan 10.001 monedas de oro hasta 50.000: Pagan un 10% del exceso de 10.000 monedas, es decir, si una persona gana 40.000 se le restan 10.000 monedas y se le cobra un 10% de sus 30.000 monedas restantes.
1.2.3 Las personas que ganan más de 50.000 monedas: Pagan un 10% de sus primeras 40.000 monedas, y pagan un 20% de sus ganancias restantes.
Siguiente paso: Usar condicionales (if, elif y else) para separar cada una de las partes del problema:
- El “if” se usa para separar a las personas que ganen 10.000 monedas o menos
- En python la condicional “elif” se usa para separar a las personas que ganan 10.001 monedas de oro a 50.000
- Y la condicional “else” se usa para separar a las personas que ganan más de 50.000 monedas de oro.
- Aparte se utilizó un ciclo WHILE para asegurar que el resultado ingresado sea el correcto.

Después se hacen los cálculos necesarios dependiendo de las monedas de oro que ingrese el usuario.

- Si el usuario ingresa un valor menor a 10.001 prácticamente no hay cálculo, el sistema solo imprime que el valor a pagar es de 0.
- Si el usuario ingresa un valor entre 10.001 a 50.000, se restan 10.000 monedas al valor total y al resultado de la resta se le multiplica por 0.10
- Si el usuario ingresa un valor mayor a 50.000, las primeras 40.000 monedas se multiplican por 0.10, es decir para los valores entre 50.000 y 90.000 monedas
- Si supera este tope el valor del diezmo será del 20% sobre sus ingresos.
Finalmente se da el resultado final de las monedas de oro a pagar.

<b> 1.3 Justificación de las estructuras de datos y algoritmos seleccionados.</b>

La estructura de datos “int” es para evaluar valores enteros, y se usa ya que las monedas se miden únicamente por enteros (no existe ¼ de moneda por ejemplo)

Condicionales

El loop "While"que se usa para verificar la información ingresada y evitar que el sistematermine si el valor no es correcto.
La condicional “if” se usa para separar un grupo de valores de otros, en este caso la condicional evalúa únicamente los valores menores o iguales a 10.000.
La condicional “elif” evalúa únicamente los casos donde el valor es mayor a 10.000 y menor a 50.000.
Por último la condicional “else” evalúa todos los demás casos, siendo este apoyados por if anidados.

<b> 1.4 Comparación con posibles soluciones alternativas y razones de la elección final. </b>

Hay múltiples soluciones para este ejercicio, las cuales son:

- Cadena de If: Normalmente se usan muchas condicionales if cuando más de un caso puede ser verdadero, pero en el caso de este problema, solo puede ser verdadera una de las 3 opciones por lo que es más recomendable usar if, elif y else.

- Función: La función “def” normalmente se usa cuando el usuario va a insertar una lista de valores, mientras que en este ejercicio no es necesario insertar múltiples valores.

- Match case: La función match case no suele ser recomendada en cuanto a evaluar rangos de valores, es más útil cuando se evalúan valores exactos.
Se opto por la cadena de IF puesto que es una herramienta versatil que nos permitia solucionar el problema, aparte que es una función que se conoce el método de implementación.

</p>
</details>
<h2>C++ </h2>
<details>
 <summary>1.INSTALACIÓN </summary>  
<p> 
 <b>Windows</b>
 
 - Se abre un editor de textos</li>
 Para todos los sistemas sirve Visual Studio Code, que se instala buscandolo en el navegador preferido.
 
 1. En Visual Studio Code, se abre el VS Code
 
  2. Seleccione el ícono de la vista Extensiones en la barra de Actividad o utilice el atajo de teclado ( Ctrl+Shift+X ).
    
  3. Buscar 'C++'
     
  4. Seleccione Instalar
     
- Se guarda el archivo
  
-Se guarda con la extensión "nombre_del_archivo".cpp
  
- Se instala el compilador

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
Para mayor comodidad configuraremos el inicio del programa por medio del comando “code, para ello primero abriremos VS Code y usaremos el siguiente conjunto de teclas (Cmd+Shift+P) con la finalidad de abrir la paleta de comandos, y por último escribiremos “Shell Command: Install ‘code’ Command in PATH” y seleccionar la opción que te sale en la lista (al finalizar este proceso se pedirá la contraseña de administrador por seguridad).

Para confirmar la instalación del comando code, abriremos la terminal y escribiremos el siguiente comando

“code --version”

Llegando a ver la versión de VS Code instalada 

Para poder usar C++ en MacOS por medio de VS Code necesitaremos instalar las extensiones necesarias, para esto descargaremos Xcode por medio del siguiente comando


“xcode-select -install”


siendo necesario por tener el compilador de C, una vez descargado el programa abriremos la terminal y escribiremos lo siguiente



“xcode-select -install”



Una vez hecho esto deberá aparecer en la terminal lo siguiente

Apple clang version 11.0.3 (clang-1103.0.32.59)
Target: x86_64-apple-darwin20.2.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin


Para confirmer la correcta instalación de Xcode usaremos el código “clang --version” teniendo que aparecer la misma información que nos brindaron anteriormente (para MacOS, el compilador “g++” lo interpreta como “Clang ++”, lo que explica el uso de este último comando)


Luego abriremos VS Code y descargaremos los complementos 

 
“C/C++ (Microsoft)”, “C/C++ Extension Pack (Microsoft)”, “C/C++ Compiler (danielpinto8zz6)”


Esta descarga se hará mediante el VS Code buscando la extensión “C/C++” y la instalaremos, siendo que, finalmente el programa estará listo para ser utilizado, una vez terminado el código deseado, lo guardaremos como un archivo “.cpp”, para compilar el archivo creado activaremos desde VS Code la terminal integrada al mismo, esto se hará con la combinación de teclas (Ctrl+ la tecla del acento grave, la que generalmente esta a la izquierda del 1), una vez abierta la terminal usaremos el siguiente código 

“g++ Archivo.cpp -Wall -std=c++20”

Este codigo generara un archivo “.out” que podremos encontrar en el gestor de archivos, ya por último escribiremos en la terminal 

“./Archivo.out”

Donde esta será el enrutamiento del archivo “.out”, ejecutándose el código hecho previamente.

**Linux**
Para poder usar visual code estudio en Linux, primero se necesita descargar la extensión y librerías de este, la instalación de estos repositorios cambia según la versión de linux que se maneje teniendo como principales las siguientes dos:

- Ubuntu/Debian: para la instalación en debian se debe ir a la página web (https://code.visualstudio.com/) y descargar la extensión “.deb”, luego de eso se abrirá la consola y se ejecutara el siguiente comando 

“sudo apt install <ruta del .deb>” 

El cual instalará el programa mediante la previa instalación del extensible proveniente del navegador web.
Luego se escribirá en la consola

“echo "code code/add-microsoft-repo boolean true" | sudo debconf-set-selections”

Lo cual descargará automáticamente los repositorios necesarios para la aplicación, en caso de querer descargarlos manualmente se utilizará el siguiente comando para instalarlos

“sudo apt-get install wget gpg
wget -qO- https://packages.microsoft.com/keys/microsoft.asc | gpg --dearmor > packages.microsoft.gpg
sudo install -D -o root -g root -m 644 packages.microsoft.gpg /etc/apt/keyrings/packages.microsoft.gpg
echo "deb [arch=amd64,arm64,armhf signed-by=/etc/apt/keyrings/packages.microsoft.gpg] https://packages.microsoft.com/repos/code stable main" |sudo tee /etc/apt/sources.list.d/vscode.list > /dev/null
rm -f packages.microsoft.gpg”

una vez finalizado este proceso se deben actualizar los repositorios en caso de alguna                    incompatibilidad, esto mediante el siguiente comando
“sudo apt install apt-transport-https
sudo apt update
sudo apt install code # or code-insiders”

Lo cual terminara la instalación completa del programa y el posible uso inmediato de este.

Distribuciones con gestor de paquetes RPM:  para este tipo de distribuciones se debe abrir la consola y escribir lo siguiente:
“sudo rpm --import https://packages.microsoft.com/keys/microsoft.asc
echo -e "[code]\nname=Visual Studio Code\nbaseurl=https://packages.microsoft.com/yumrepos/vscode\nenabled=1\nautorefresh=1\ntype=rpm-md\ngpgcheck=1\ngpgkey=https://packages.microsoft.com/keys/microsoft.asc" |sudo tee /etc/zypp/repos.d/vscode.repo > /dev/null”

Este comando permite ver la ruta que tomara la consola para instalar los paquetes y librerías   necesarias para ejecutar Visual Studio Code, luego de eso se escribirá en la consola
“sudo zypper install code”
Lo cual terminara con la instalación del programa, siendo posible ejecutarlo una vez terminada la instalación.

¿Cómo compilar en Linux?
Para poder compilar VS code (Visual Studio code) en Linux, primero debemos ejecutar el programa y seleccionar las extensiones, mediante la combinación de teclas (Ctrl+Shift+X) luego se buscará C++ y se instalará la respectiva extensión, una vez instalada se usará el compilador g++ para escribir el código deseado. Para ello abriremos la consola y escribiremos 

“gcc -v”
En caso de no tener instalado el compilador necesitado, lo podemos instalar desde la consola mediante el siguiente comando

“sudo apt-get update”

El cual actualizara todos los paquetes requeridos o instalados en y por el sistema, después instalaremos compiladores GNU mediante

“sudo apt-get install build-essential gdb”
Este proceso sirve en distribuciones derivadas de Ubuntu/Debian, en caso de utilizar distribuciones RPM como OpenSuse se utilizarán los siguientes comandos serán utilizados para la instalación de los compiladores.

- (Actualización del sistema):

“sudo zypper refresco
actualización de sudo zypper”

- (Habilitar los repositorios OSS para la correcta instalación de g++)

“sudo zypper addrepo http://descargar.opensuse.org/distribución/salto/15.6/repo/oss/ oss”

- (Buscar los paquetes GCC disponibles)

“zypper buscar gcc”

- (instalar los paquetes GCC)

“sudo zypper instalar gcc”

- (instalar los paquetes gcc-c++, estos solo son necesarios para la compilación de programas en C++)

“sudo zypper instalar gcc-c++”

Ya instalado todo lo necesario para programar mediante VS code con el lenguaje C++ y una vez terminado el código que se requiera se deberá guardar el mismo con la extensión “.cpp” ya hecho esto en el propio programa se seleccionara el botón “run C/C++ file” ubicado en la flecha ubicada en la esquina superior derecha de la pantalla junto a los iconos de cerrar y minimizar, por último escogeremos “g++ build and debug active file” en la lista de los compiladores detectados que nos muestre, ya una vez se termine este proceso se ejecutara el código realizado (no será necesario realizar estos últimos dos pasos cada vez que se abra el programa, esto solo es aplicable por cada código realizado).

 
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
- Multisalida: switch (Esta es epecial poqre solo sirve para igualdades y se recomienda maximo para 5 opciones)

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
<details>
<summary>4.EJEMPLOS DE CÓDIGO</summary>  
<p> - <b>Primer ejemplo: </b>
En este se ve el uso del tipo de variables y los operadoes aritméticos para calcular el área de un circulo.

```cpp
  +#include <iostream>

using namespace std;

int main ()
{
    cout<< "PROGRAMACION AREA DE UN CIRCULO" <<endl;
    
    float radio; 
   float PI=3.1416;
    
    cout<< "Digite el valor del radio "<< endl;
    cin>>radio;
  
    system("cls");
     
    cout<< "CIRCULO" <<endl<<endl;
    cout<<"Perimetro:  "<<radio*PI <<endl<<endl;
    
    cout<<"Gracias por digitar su informacion"<<endl<<endl;
    cout<<"Hecho por Laura Jimenez M."<<endl<<endl;
    
    
    system("pause");
    return EXIT_SUCCESS;
}
    
```
- <b>Segundo ejemplo: </b>
En este ejemplo se usa el while para un programa para ingreso de zapatos, el while se usa para repetir el proceso de datos de referencia del zapato.
```cpp
#include <iostream>
using namespace std;

int main ()
{
  int referencia_del_zapato;
  char descripcion_del_zapato[100],respuesta;
  int talla,costo;
  
  cout << "*************************************" << endl;
  cout << "ADMISNISTRACION DE VENTA DE ZAPATOS" << endl;
   cout << "*************************************" << endl;
  cout << "QUIERE INGRESAR UN ZAPATO AL PROGRAMA S/N: "<<endl;
  cin>>respuesta;
  while(respuesta=='S')
  {
      cout << "Digite la referencia del zapato..." << endl;
  cin >> referencia_del_zapato;
  cin.ignore (256, '\n');
  cout << "Digite la descripcion del zapato..." << endl;
  cin.getline (descripcion_del_zapato, 100);
  cout << "Digite la talla del zapato..." << endl;
  cin >> talla;
  cout << "QUIERE INGRESAR OTRO ZAPATO AL PROGRAMA S/N: " <<endl;
  cin>>respuesta;
  }
   cout << "*************************************" << endl;
  cout << "GRACIAS POR DIGITAR" << endl;
  cout << "HECHO POR LAURA JIMENEZ M" << endl;
 cout << "*************************************" << endl;
  system ("pause");
  return EXIT_SUCCESS;
 
}

```
- <b>Tercer ejemplo: </b>
En este ejemplo se usa el IF y el SWITCH para clasificar las utilidades que pueden los zapatos, por otra parte este ejercicio se ven el uso de diversos tipos de variables y de operaciones.
```cpp
#include <iostream>
using namespace std;

int main ()
{
  int referencia_del_zapato;
  char descripcion_del_zapato[100];
  int talla;
  char disponibilidad;
  int SW,costo, utilidad;
  int precio_venta;
  int cantidad_de_zapatos;

 cout << "*************************************" << endl;
  cout << "ADMISNISTRACION DE VENTA DE ZAPATOS" << endl;
   cout << "*************************************" << endl;
  cout << "Digite la referencia del zapato..." << endl;
  cin >> referencia_del_zapato;
  cin.ignore (256, '\n');
  cout << "Digite la descripcion del zapato..." << endl;
  cin.getline (descripcion_del_zapato, 100);
  cout << "Digite la talla del zapato..." << endl;
  cin >> talla;
  cout << "Digite S o N segun la disponibilidad del zapato..." << endl <<
    endl;
  cin >> disponibilidad;
  cout << "Digite la cantidad de zapatos que estan disponibles..." << endl;
  cin >> cantidad_de_zapatos;
  cout << "Digite el costo del zapato por unidad..." << endl;
  cin >> costo;
  cout << "Digite el precio de venta del zapato por unidad..." << endl;
  cin >> precio_venta;
  
  system ("cls");
 cout << "*************************************" << endl;
 cout << "LOS DATOS REGISTRADOS SON LOS SIGUIENTES" << endl<<endl;
 
  cout << "La referencia del zapato es:" << referencia_del_zapato << endl;
  cout << "La descripcion del zapato es:" << descripcion_del_zapato << endl;
  cout << "La talla del zapato es:" << talla << endl;
  cout << "La disponibilidad del zapato es:" << disponibilidad << endl;
  cout << "La cantidad de zapatos son:" << cantidad_de_zapatos << endl;
  cout << "El costo del zapato por unidad es:" << costo << endl;
  if(costo<=30000){SW=0;}

     if(costo>30000&&costo<=60000){SW=1;}
   
     else if(costo>60000){SW=2;}
    
     switch(SW)
     {
         case 0:
          cout<<"TIPO: A"<<endl;
         cout << "Porcentaje de utilidad del 50%" <<endl;
         break;
         case 1:
         cout<<"TIPO: B"<<endl;
         cout << "Porcentaje de utilidad del 40%" <<endl;
          break;
          case 2:
          cout<<"TIPO: C"<<endl;
         cout << "Porcentaje de utilidad del 30%" <<endl;
         break;
         
     }
 
  cout << "El costo total de "<<cantidad_de_zapatos << "  zapatos es:" << cantidad_de_zapatos*costo << endl;
  cout << "El precio de venta del zapato por unidad es:" << precio_venta << endl;
   cout << "El precio total de  "<<cantidad_de_zapatos <<"  zapatos es:" << cantidad_de_zapatos*precio_venta << endl;
 utilidad=precio_venta -costo;
 cout << "La utilidad por unidad:" << utilidad << endl;
  cout << "La utilidad total:" << utilidad*cantidad_de_zapatos << endl;
  
  cout << "*************************************" << endl;
  cout << "GRACIAS POR DIGITAR" << endl;
  cout << "HECHO POR LAURA JIMENEZ M" << endl;
 cout << "*************************************" << endl;
  system ("pause");
  return EXIT_SUCCESS;
 
}

```
</p>
</details>
  <details>
<summary> 5. ERRORES COMUNES </summary>
<p> 
- <b>Falta  ; o falta de {...} </b>
  
   ```cpp
#include <iostream>
#include <string>
float a;
float b // NO SE CERRO CON PUNTO Y COMA
int main()
{
	printf("\nDigame cual es el precio base del articulo\n");
	std::cin>>a;
	printf("\nDigame cual es el descuento que tiene el articulo\n");
	std::cin>>b;
printf("\nEl valor final del articulo es\n");
b*=a;
b/=100;
a-=b;
std::cout <<a;

	return 0;
// NO se cerro el int main con corchete
```
- <b>No romper la estructura switch con break </b>
```cpp
#include <iostream>
#include <string>
using namespace std;
int a;
int main ()
{
cout << "Deme un número";
cin >> a;
switch (a) {
case 1:
cout << "El número es uno";
// No se puso el break;
case 2:
cout << "El número es dos";
defaul:
cout << "El número es << a ;
}
}
```
- <b> Poner valores de entrada difrenets a los de la variable declarada </b>
```cpp
#include <iostream>
#include <string>
int a;
float b;
bool c;
int main ()
{
std:: cout << "Deme un número entero";
std:: cin >> c;
// Aqui hay un error puesto que la variable c se declaro como booleanos se tendria que guardar en a
```
- <b> No declarar en using namespace std o no esoecificarlo línea por línea </b>
```cpp
#include <iostream>
#include <string>
// Aqui no se declaró el using namespace std;
int a;
bool c;
int main ()
{
cout << "Deme un número entero"; //Antes de "cout" falta especificar el std::
std ::cin >> c;
```
Cabe recalcar que si se usa uno no se usa el otro
```cpp
#include <iostream>
#include <string>
using namespace std;
int a;
bool c;
int main ()
{
std ::cout << "Deme un número entero"; //Antes se declaro el espacio que se va a utilizar por esto esta línea es repetitiva
std ::cin >> c;
```
  </p>
  </details>
  <details>
<summary> 6. CONTRIBUCIONES </summary>  
	  
<p> Las demás personas pueden comentar mejores maneras de solcucionar el problema cambiando alguna operación haciendo qeu el código pueda ser mas óptimo.</p>
  </details>
<h3>PYTHON</h3>
<details>



