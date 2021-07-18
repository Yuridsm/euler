# Euler Project

> É só um projetinho para estudar headers em `c language`.

## Compilação
```powershell
gcc OperatingSystem.c -o .\obj\OperatingSystem.o -c
gcc Windows.c -o .\obj\Windows.o -c
gcc StartUp.c -o .\obj\StartUp.o -c
gcc Linux.c -o .\obj\Linux.o -c

gcc -o .\exe\startUp .\obj\OperatingSystem.o .\obj\Linux.o .\obj\Windows.o .\obj\StartUp.o
```

## Contribuição
Qualquer problema que encontrar ou quiser sugerir melhorias, envie-me uma issue.