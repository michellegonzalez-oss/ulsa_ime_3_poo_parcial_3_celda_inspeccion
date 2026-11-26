
# Documentación de la clase: BASCULA



**Documentación elaborada por:** Renata Lucía Farías Esquivel
**Matrícula:** 25111
**Integrante:** 2

## 1. Propósito

**¿Qué representa tu clase y qué revisa o registra de cada pieza?**

Mi clase Bascula representa una estación de inspección de peso dentro de una línea de producción. Su función principal es verificar que las piezas cumplan con los estándares de calidad en cuanto a su masa.
De cada pieza, la clase revisa y evalúa su peso pieza.peso(). Retorna true si la pieza está dentro del rango permitido (es decir, es una pieza "buena" o aprobada) o false si está fuera de los límites (pieza defectuosa).
Además, la clase registra internamente su estado de calibración y proporciona un método para reiniciar ese desfase a cero calibrar().

**¿Quién usa tu clase y para qué?**
La clase Bascula está diseñada como una pieza independiente que, por ahora, funciona de forma aislada porque se usan objetos como la Bascula para probar sus tamaños en memoria, pero sin conectarla a la lógica de la celda.

## 2. Decisiones de diseño

**¿De qué clase o clases hereda tu clase y por qué?** (Si es `ReporteTurno`, explica por qué no hereda de `Dispositivo`.)

Al heredar de Dispositivo, Bascula obtiene automáticamente el atributo identificador (id_) y su método de acceso (id()). Además, al heredar, se ve obligada a implementar los métodos virtuales puros descripcion() e inspeccionar()

**Atributos propios de tu clase y para qué sirve cada uno:**

Mi clase Bascula define tres atributos privados propios (excluyendo el id_ heredado):

pesoMin_ : Almacena el límite inferior del rango de peso aceptable. Sirve para saber cuál es el peso mínimo que debe tener una pieza para ser considerada válida.

pesoMax_ : Almacena el límite superior del rango de peso aceptable. Sirve para saber cuál es el peso máximo permitido antes de considerar la pieza como defectuosa.

desfase_ : Representa el margen de error o desviación de fábrica de la báscula. Sirve para ajustar la medición real; si la báscula no está calibrada, este valor se suma al peso de la pieza para compensar la imprecisión del sensor. Si es 0.0, la báscula está calibrada.


**Métodos que sobrescribes con `override` y cómo implementaste la regla de inspección:**
descripcion() const override: Devuelve el string "Bascula de Inspeccion de Peso", identificando el tipo de dispositivo.

inspeccionar(const Pieza& pieza) override: Aquí implementé la regla de inspección de la siguiente manera:

Primero, calculo el peso medido sumando el desfase de la báscula al peso real de la pieza: double pesoMedido = pieza.peso() + desfase_;
Aplico la regla comparando ese peso medido contra los límites establecidos. Retorna true (la pieza pasa la inspección) si el peso medido es mayor o igual al pesoMin_ Y menor o igual al pesoMax_. En caso contrario, retorna false.

**¿Qué métodos de tu clase son `const` y por qué?**

necesitaCalibracion() const: Es const porque solo lee el valor del atributo desfase_ para comprobar si es distinto de cero. No modifica el estado del objeto.

descripcion() const (y también el heredado id() const): Es const porque solo devuelve un texto descriptivo estático. No altera ningún atributo interno de la báscula.

inspeccionar(const Pieza& pieza): Aunque en el código que compartiste no tiene la palabra const al final, debería ser const y es una buena práctica que lo sea porque una pieza no debería modificar el estado de la báscula. 

**Lo particular de tu clase.** Responde solo lo que corresponda a tu clase:
¿cómo modelaste el desfase y qué hace `calibrar()`?
Modelé el desfase como un atributo de tipo double llamado desfase_. Este valor representa la desviación física o el error de medición que puede tener el sensor de la báscula respecto al peso real. En el método inspeccionar(), este desfase se suma al peso real de la pieza (pieza.peso() + desfase_) antes de compararlo con los límites pesoMin_ y pesoMax_. Esto simula cómo un sensor descalibrado altera la lectura real.

¿Qué hace calibrar()?
El método calibrar() se encarga de restablecer la precisión de la báscula. Su única acción es asignar 0.0 al atributo desfase_. Al poner el desfase a cero, la báscula vuelve a medir el peso exactamente como lo reporta la pieza.


## 3. Pruebas

**¿Cómo comprobaste que tu clase funciona? ¿Qué piezas del turno te sirvieron para verificarla?**
Verifiqué el correcto funcionamiento de los métodos de calibración (necesitaCalibracion() y calibrar()) alternando el valor del desfase. 

## 4. Bitácora

**Dudas que tuviste y cómo las resolviste:**
Al principio no tenía claro por qué debía heredar de Dispositivo ni cómo funcionaba override. Lo resolví revisando la teoría de clases abstractas y polimorfismo, entendiendo que al heredar de Dispositivo podía tratar a la Bascula como un dispositivo genérico en la celda de inspección.


**Errores que encontraste y cómo los corregiste:**

Solo se nos dificultó la ejecución por un comando mal escrito y otroe incorrectos, fuera de eso no hubo muchos errores durante el proceso.
