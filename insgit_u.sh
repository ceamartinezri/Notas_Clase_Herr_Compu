# !/bin/bash

echo "Usuario SIA:";
read user;

echo "Contraseņa SIA:";
read password;

export https_proxy="https://$user:$passwordIII@proxyapp.unal.edu.co:8080/"

echo "Escribe el mensaje del commit a realizar:";
read message;

(git add $*);

(git status);

(git commit -m "$message");

(git push -u origin master);
