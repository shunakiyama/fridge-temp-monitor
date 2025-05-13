# 🇵🇱 Urządzenie monitorujące temperaturę w lodówce
To oparte na ESP32 urządzenie oferuje monitorowanie wielu stref w twojej lodówce. Temperaturę możesz odczytać lokalnie z wyświetlacza oraz
przez portal webowy lub aplikację HomeAssistent.

## Dlaczego?
Nie każda lodówka jest zbyt dobra albo nie każda jest na tyle nowa aby posiadać termostat. Dzięki temu urządzeniu możesz monitorować i zapisywać 
temperaturę w swojej lodówce aby mieć pewność że utrzymuje temperaturę w bezpiecznych limitach oraz poprawić poziom chłodzenia gdy widzisz że jest 
nie odpowiedni.

Posiadacze dobrych lodówek też mogą skorzystać z tego urządzenia gdyż pozwala na monitorowanie kilku stref naraz, coś co dopiero drogie, high-end, lodówki 
posiadają.

## Pliki
```
|--code
    |--esphome
    |--v3_multiple_sensors
|--models
    |--solidworks
    |--3d_printing
|--pcb
    |--fridge_temp_design
        |--[WSZYSTKIE PLIKI]
```
Folder ```code``` posiada wszystkie pliki związane z oprogramowaniem. Aktualna wersja, używająca ESPHome, jest w folderze ```esphome```. Wersja C++ (.ino) jest w
```v3_multiple_sensors```.

Folder ```models``` posiada wszystkie pliki związane z obudową. Folder ```solidworks``` posiada wszytskie pliki z programu SolidWorks, otwórz te pliki 
w Soliwroks aby edytować ten design. Folder ```3d_printing``` posiada modele wyeksportowane do ```.stl```, gotowe do druku 3d.

Folder ```pcb/fridge_temp_design``` posiada wszystkie pliki dotyczace PCB, chwilowo pliki Gerber nie są dostępne.

## Plany

---
# 🇬🇧 Fridge temperature monitoring device
This ESP32 based device allows for temperature monitoring in many zones at once in your fridge. You can read the temperature locally or on a HomeAssistant's
webportal or app.

## Why?
Not every fridge is good or new enough to have a thermostat. Thanks to this device you can monitor and record your fridge's temperature and be sure it
keeps itself in the safe limits, adjust it based on the readings.

The owners of good fridges also can use this device as it allows the monitoring of many zones at once which only the expensive, high-end, ones can do.

## Files
```
|--code
    |--esphome
    |--v3_multiple_sensors
|--models
    |--solidworks
    |--3d_printing
|--pcb
    |--fridge_temp_design
        |--[ALL FILES]
```
Folder ```code``` has all files related to software. Current version, using ESPHome, is in ```esphome```. C++ version (.ino) is in ```v3_multiple_sensors```.

Folder ```models``` has all the files related to the case. Folder ```solidworks``` has all the SolidWorks files, use these files to edit the design.
Folder ```3d_printing``` has all the models exported to ```.stl```, ready to be 3d printed.

Folder ```pcb/fridge_temp_design``` has all files related to the PCB design, Gerber files are not available yet. 
