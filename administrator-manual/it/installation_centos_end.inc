Abilitare i repository YUM specifici con il comando: ::

 yum localinstall -y http://mirror.nethserver.org/nethserver/nethserver-release-6.rpm

Per installare il sistema di base eseguire: ::

 nethserver-install

Al termine dell'installazione, :ref:`accedere al Server Manager
<access-section>` per :ref:`installare il software
<package_manager-section>` addizionale.


Per promuovere la macchina a |product| eseguire da linea di comando: ::

    yum localinstall http://update.nethesis.it/nethserver/7/nethserver-register.rpm

Quindi :ref:`accedere al Server Manager <access-section>` e :ref:`registrare la macchina
<registration-section>`.
Al termine della registazione, eseguire da linea di comando: ::

    yum update @nethserver-iso
