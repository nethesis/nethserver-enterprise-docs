Changes
=======

This is the first official release of |product| 7.
Starting from this release, any installation will be upgradable to the final release.

A complete list fo changes for this release can be found here:

* https://www.nethserver.org/nethserver-7-beta1-mayo-released/
* https://www.nethserver.org/nethserver-7-beta2-bruschetta-released/

Full changelog:
https://github.com/NethServer/dev/milestone/5?closed=1

Known bugs:
https://github.com/NethServer/dev/issues?q=is%3Aissue+is%3Aopen+label%3Abug


Discontinued packages
---------------------

The following packages have been removed:

* nethserver-collectd-web: replaced by nethserver-cgp
* nethserver-password: integrated inside nethserver-sssd
* nethserver-faxweb2: http://community.nethserver.org/t/ns-7-faxweb2-vs-avantafax/2645
* nethserver-fetchmail: replaced by getmail
* nethserver-ocsinventory, nethserver-adagios: due to compatibility problems with Nagios, these modules will be
  mantained only on |product| 6.x release
* nethserver-snort: replaced by nethserver-suricata
