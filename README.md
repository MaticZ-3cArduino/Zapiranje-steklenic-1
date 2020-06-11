# Zapiranje-steklenic-1

Navodilo naloge: 

S tipko A aktiviramo gibanje enosmernega cilindra navzdol in s tem nameščanje čepa v vrat steklenice. Pogoj za gibanje je, da je steklenica nameščena pod cilindrom, kar zaznava senzor S. Gibanje cilnidra navzdol se ustavi, ko doseže spodnji položaj (senzor Ksp). Dviganje cilindra pa se začne, če spustimo tipko A (VZMET).

Priredbena tabela:

Vhodi:

oznaka     naslov operanda    vrsta kontakta      pomen

A              x0                 NO              nameščanje čepa v vrat steklenice, vklop gibanja navzdol

S              x1                 NO              pogoj za gibanje navzdol

Ksp            x2                 NO              izklop gibanja navzdol

Izhodi:

oznaka    naslov operanda     aktiven pri         pomen

cilinder        y0                1               gibanje cilindra 

Kosovnica: 

-	Arduino UNO,
-	breadboard,
-	16x povezovalna žica
-	3x 330-Ohm upor,
-	3x tipka,
-	4x dioda,
-	1x DC motor,
-	1x integrirano vezje L293D,
-	USB kabel

Komentar delovanja:

Pod cilinder postavimo steklenico in s tem aktiviramo senzor S (tipka). S pritiskom na tipko A aktiviramo gibanje cilindra navzdol in nameščanje čepa v steklenico. Ko senzor doseže spodnji položaj se aktivira senzor Ksp (tipka) in s tem ustavi gibanje cilindra. Dvigovanje se začne, ko spustimo tipko A.

Predlogi za izboljšanje naprave:

Napravo bi lahko izboljšali s tem, da bi uporabili dejanske senzorje namesto tipk, uporabili bi lahko koračni motor.
