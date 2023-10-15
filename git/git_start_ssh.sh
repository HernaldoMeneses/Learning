#You will nee a key ssh to conetc to github soo
ssh-keygen -t ed25519 -C "Email@Exemplo.com"
#ssh-keygen is the comand
#-t type of criptography in this case ed25519 
#-C coment that hel remember what is the key for
#
#you can choice a directory or just save on default
#after this you can choice a password or just lef blank dont you worry
#
eval "$(ssh-agent -s)"
#Here we garanted tha the agente ssh start to torn possible the conex with ambients variables
#
ssh-add ~/.ssh/id_ed25519
#here we add the key generated to the vareables of ambients
#remember that this key is to identify your machine on github
#until here the canot see anukey
#
#now we need one more key, the public key the comand is parently
ssh-keygen -t ed25519-sk -C "comenttoremember"
#
#
#Now tha you have the public kye you will need
#copy the key passoword generated in the github plataform
#so to copy use
cat ~/.ssh/id_ed25519.pub
#
#Now you have all that is need to conex 
#so on github.com in your profile find on menu settings
#then look for SSH an GPG keys
#botoww Neww SSH key
#giv a name to her
#and past the key
#save and everithing is ok
#
#torn back on prompt
#try
git remote -v
#theres to possibli in he
#https:
#git@github.com
#
#if you see https you will nee change de configutatino to ssh
git config --global url."git@github.com:".instead0f "https://github.com"
#this is to git use ssh and not https
#just in case, this is global but you can use this config to one repositoris too
