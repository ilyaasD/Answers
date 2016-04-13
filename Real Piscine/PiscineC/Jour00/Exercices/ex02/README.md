1. Créer tous les fichiers et répertoires.
```bash
$ touch test1 test3 test4 
$ mkdir test0 test2
```

2. Créer un lien physique du fichier test3.
```bash
ln test3 test5
```

3. Créer un lien symbolique du dossier test0.
```bash
$ ln -s test0 test6
``` 

4. Modifier la taille des fichiers.
```bash
$ truncate -s 4 test1
$ truncate -s 1 test3
$ truncate -s 2 test4
$ truncate -s 1 test5
```

5. Modifier les droits des fichiers et répertoires.
```bash
$ chmod 715 test0
$ chmod 714 test1
$ chmod 504 test2
$ chmod 404 test3
$ chmod 641 test4
$ chmod 404 test5
```

6. Modifier la date de modification des fichiers et répertoires.
```bash
touch -t 1506012047 test0
touch -t 1506012146 test1
touch -t 1506012245 test2
touch -t 1506012344 test3
touch -t 1506012343 test4
touch -t 1506012344 test5
touch -h -t 1506012220 test6
```

7. Créer le fichier exo02.tar.
```bash
tar -cf exo2.tar test0 test1 test2 test3 test4 test5 test6
```

8. Supprimer les fichiers.
```bash
rm -rf test0 test1 test2 test3 test4 test5 test6
```
