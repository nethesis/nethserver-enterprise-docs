Cambiamenti
===========

Questa è la prima release ufficiale di |product| 7.
A partire da questa release, ogni installazione sarà aggiornabile alla versione finale.

Una lista completa dei cambiamenti è qui:

* https://www.nethserver.org/nethserver-7-beta1-mayo-released/
* https://www.nethserver.org/nethserver-7-beta2-bruschetta-released/

Changelog completo:
https://github.com/NethServer/dev/milestone/5?closed=1

Bug noti:
https://github.com/NethServer/dev/issues?q=is%3Aissue+is%3Aopen+label%3Abug


Moduli rimossi
--------------

I seguenti pacchetti sono stati rimossi:

* nethserver-collectd-web: sostituito da nethserver-cgp
* nethserver-password: integrato in nethserver-sssd
* nethserver-faxweb2: http://community.nethserver.org/t/ns-7-faxweb2-vs-avantafax/2645
* nethserver-fetchmail: sostituto da nethserver-getmail
* nethserver-ocsinventory, nethserver-adagios: a causa di problemi di compatibilità con Nagios,
  questi moduli sono mantenuti solo nella release 6.x
* nethserver-snort: sostituito da nethserver-suricata

