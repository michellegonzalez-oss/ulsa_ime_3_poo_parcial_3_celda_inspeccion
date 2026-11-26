
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

[Inserta aquí tu respuesta]

## 2. Decisiones de diseño

**¿De qué clase o clases hereda tu clase y por qué?** (Si es `ReporteTurno`, explica por qué no hereda de `Dispositivo`.)

[Inserta aquí tu respuesta]

**Atributos propios de tu clase y para qué sirve cada uno:**

[Inserta aquí tu respuesta]

**Métodos que sobrescribes con `override` y cómo implementaste la regla de inspección:**

[Inserta aquí tu respuesta]

**¿Qué métodos de tu clase son `const` y por qué?**

[Inserta aquí tu respuesta]

**Lo particular de tu clase.** Responde solo lo que corresponda a tu clase:
- `Bascula` o `CalibradorLaser`: ¿cómo modelaste el desfase y qué hace `calibrar()`?
- `SensorTemperatura`: ¿qué significa `final` y por qué tiene sentido en esta clase?
- `ReporteTurno`: ¿qué sobrecargas implementaste (constructores y operadores) y cómo decide `operator==` que dos reportes son iguales?
- `CamaraVision` o `Durometro`: ¿qué tuviste que hacer para que la celda pudiera usar tu clase sin modificarla?

[Inserta aquí tu respuesta]

## 3. Pruebas

**¿Cómo comprobaste que tu clase funciona? ¿Qué piezas del turno te sirvieron para verificarla?**

[Inserta aquí tu respuesta]

## 4. Bitácora

**Dudas que tuviste y cómo las resolviste:**

[Inserta aquí tu respuesta]

**Errores que encontraste y cómo los corregiste:**

[Inserta aquí tu respuesta]
