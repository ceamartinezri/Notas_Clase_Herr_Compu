# !/bin/bash

#echo "Usuario SIA:";
#read user;

#echo "Contraseña SIA:";
#read password;

#echo "https://$user:$password@proxyapp.unal.edu.co:8080/"

export https_proxy="https://ceamartinezri:carolina0809@proxyapp.unal.edu.co:8080/"

#export https_proxy="https://$user:$password@proxyapp.unal.edu.co:8080/"

echo "Escribe el mensaje del commit a realizar:";
read message;

(git add $*);

(git status);

(git commit -m "$message");

(git push -u origin master);
