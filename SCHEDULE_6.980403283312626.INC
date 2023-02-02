-- <+> SCHEDULE 7/7/2011 (0 days)

RPTSCHED
    FIP WELSPECS WELLS /

WELSPECS
-- NAME GROUP I J K PHASE
   'I1'     'WI'   5    57  1* 'WATER' /
	'I2'     'WI'   30   53  1* 'WATER' /
	'I3'     'WI'   2    35  1* 'WATER' /
	'I4'     'GI'   27   29  1* 'GAS' /
	'I5'     'WI'   50   35  1* 'WATER' /
	'I6'     'WI'   8    9   1* 'WATER' /
	'I7'     'WI'   32   2   1* 'WATER' /
	'I8'     'WI'   57   6   1* 'WATER' /
   'P1'     'P'   16   43  1* 'OIL' /
   'P2'     'P'   35   40  1* 'OIL' /
   'P3'     'P'   23   16  1* 'OIL' /
   'P4'     'P'   43   18  1* 'OIL' /
/

COMPDAT
-- NAME    I   J  K1    K2    STAT     SATNUM   TRANS DIAM    KH  SKIN DFAC    
   'I1'        2*        3     7      'OPEN'      2*     0.1546 	1*          0 / 
	'I2'        2*        3     7      'OPEN'      2*     0.1546 	1*          0 /
	'I3'        2*        3     7      'OPEN'      2*     0.1546 	1*          0 /
	'I4'        2*        1     3      'OPEN'      2*     0.1546 	1*          0 /
	'I5'        2*        3     7      'OPEN'      2*     0.1546 	1*          0 /
	'I6'        2*        3     7      'OPEN'      2*     0.1546 	1*          0 /
	'I7'        2*        3     7      'OPEN'      2*     0.1546 	1*          0 /
	'I8'        2*        3     7      'OPEN'      2*     0.1546    1*          0 /
   'P1'        2*        1     6      'OPEN'      2*     0.1546 	1*          0 / 
   'P2'        2*        1     6      'OPEN'      2*     0.1546 	1*          0 / 
   'P3'        2*        1     6      'OPEN'      2*     0.1546 	1*          0 / 
   'P4'        2*        1     6      'OPEN'      2*     0.1546		1*          0 / 
/

GRUPTREE
-- CHILD PARENT
   'WI'  'F'   /
   'GI'  'F'   /
   'P'   'F'   /
/

WCONPROD
--NAME   STATUS   CONTROL  ORAT  WRAT  GRAT LRAT RESV BHP THP VFP
   'P1'     'OPEN'      'BHP' 5*  150/
   'P3'     'OPEN'      'BHP' 5*  150/
   'P2'     'OPEN'      'BHP' 5*  150/
   'P4'     'OPEN'      'BHP' 5*  150/
/

WCONINJE
-- NAME     PHASE       STAT     CONTROL     RATE  RESV  BHP   THP VFP
   'I1'     'WATER'  'OPEN'   BHP   2*   400     /
   'I2'     'WATER'  'OPEN'   BHP   2*   400     /
   'I3'     'WATER'  'OPEN'   BHP   2*   400     /
   'I4'     'GAS'    'OPEN'   BHP   2*   400     /
   'I5'     'WATER'  'OPEN'   BHP   2*   400     /
   'I6'     'WATER'  'OPEN'   BHP   2*   400     /
   'I7'     'WATER'  'OPEN'   BHP   2*   400     /
   'I8'     'WATER'  'OPEN'   BHP   2*   400     /
/

WPIMULT
'I1'     10 /
'I2'     10 /
'I3'     10 /
'I4'     10 /
'I5'     10 /
'I6'     10 /
'I7'     10 /
'I8'     10 /
'P1'     10 /
'P2'     10 /
'P3'     10 /
'P4'     10 /
/

GCONPROD
--NAME CONTROL ORAT  WRAT  GRAT  LRAT
'F'   'LRAT'   3*   11756.795711195227   /
/

GCONINJE
'F'  'WATER'  'REIN'   2*   1.9073041201034708  /
'F'  'GAS'    'REIN'   2*   0.39852644182227603 /
/


NUPCOL
10 /


DATES
1 'FEB' 2025   /
/
DATES
1 'MAR' 2025   /
/
DATES
1 'APR' 2025   /
/
DATES
1 'MAY' 2025   /
/
DATES
1 'JUN' 2025   /
/
DATES
1 'JUL' 2025   /
/
DATES
1 'AUG' 2025   /
/
DATES
1 'SEP' 2025   /
/
DATES
1 'OCT' 2025   /
/
DATES
1 'NOV' 2025   /
/
DATES
1 'DEC' 2025   /
/
DATES
1 'JAN' 2026   /
/
DATES
1 'FEB' 2026   /
/
DATES
1 'MAR' 2026   /
/
DATES
1 'APR' 2026   /
/
DATES
1 'MAY' 2026   /
/
DATES
1 'JUN' 2026   /
/
DATES
1 'JUL' 2026   /
/
DATES
1 'AUG' 2026   /
/
DATES
1 'SEP' 2026   /
/
DATES
1 'OCT' 2026   /
/
DATES
1 'NOV' 2026   /
/
DATES
1 'DEC' 2026   /
/
DATES
1 'JAN' 2027   /
/
GCONPROD
--NAME CONTROL ORAT  WRAT  GRAT  LRAT
'F'   'LRAT'   3*   14739.749614854984   /
/

GCONINJE
'F'  'WATER'  'REIN'   2*   3.801214195736055  /
'F'  'GAS'    'REIN'   2*   0.05083517260772652 /
/
DATES
1 'FEB' 2027   /
/
DATES
1 'MAR' 2027   /
/
DATES
1 'APR' 2027   /
/
DATES
1 'MAY' 2027   /
/
DATES
1 'JUN' 2027   /
/
DATES
1 'JUL' 2027   /
/
DATES
1 'AUG' 2027   /
/
DATES
1 'SEP' 2027   /
/
DATES
1 'OCT' 2027   /
/
DATES
1 'NOV' 2027   /
/
DATES
1 'DEC' 2027   /
/
DATES
1 'JAN' 2028   /
/
DATES
1 'FEB' 2028   /
/
DATES
1 'MAR' 2028   /
/
DATES
1 'APR' 2028   /
/
DATES
1 'MAY' 2028   /
/
DATES
1 'JUN' 2028   /
/
DATES
1 'JUL' 2028   /
/
DATES
1 'AUG' 2028   /
/
DATES
1 'SEP' 2028   /
/
DATES
1 'OCT' 2028   /
/
DATES
1 'NOV' 2028   /
/
DATES
1 'DEC' 2028   /
/
DATES
1 'JAN' 2029   /
/
GCONPROD
--NAME CONTROL ORAT  WRAT  GRAT  LRAT
'F'   'LRAT'   3*   14899.606057310972   /
/

GCONINJE
'F'  'WATER'  'REIN'   2*   1.4564969402764465  /
'F'  'GAS'    'REIN'   2*   0.5430909308332197 /
/
DATES
1 'FEB' 2029   /
/
DATES
1 'MAR' 2029   /
/
DATES
1 'APR' 2029   /
/
DATES
1 'MAY' 2029   /
/
DATES
1 'JUN' 2029   /
/
DATES
1 'JUL' 2029   /
/
DATES
1 'AUG' 2029   /
/
DATES
1 'SEP' 2029   /
/
DATES
1 'OCT' 2029   /
/
DATES
1 'NOV' 2029   /
/
DATES
1 'DEC' 2029   /
/
DATES
1 'JAN' 2030   /
/
DATES
1 'FEB' 2030   /
/
DATES
1 'MAR' 2030   /
/
DATES
1 'APR' 2030   /
/
DATES
1 'MAY' 2030   /
/
DATES
1 'JUN' 2030   /
/
DATES
1 'JUL' 2030   /
/
DATES
1 'AUG' 2030   /
/
DATES
1 'SEP' 2030   /
/
DATES
1 'OCT' 2030   /
/
DATES
1 'NOV' 2030   /
/
DATES
1 'DEC' 2030   /
/
DATES
1 'JAN' 2031   /
/
GCONPROD
--NAME CONTROL ORAT  WRAT  GRAT  LRAT
'F'   'LRAT'   3*   15596.12084865932   /
/

GCONINJE
'F'  'WATER'  'REIN'   2*   2.6709944782603188  /
'F'  'GAS'    'REIN'   2*   0.5314603439346852 /
/
DATES
1 'FEB' 2031   /
/
DATES
1 'MAR' 2031   /
/
DATES
1 'APR' 2031   /
/
DATES
1 'MAY' 2031   /
/
DATES
1 'JUN' 2031   /
/
DATES
1 'JUL' 2031   /
/
DATES
1 'AUG' 2031   /
/
DATES
1 'SEP' 2031   /
/
DATES
1 'OCT' 2031   /
/
DATES
1 'NOV' 2031   /
/
DATES
1 'DEC' 2031   /
/
DATES
1 'JAN' 2032   /
/
DATES
1 'FEB' 2032   /
/
DATES
1 'MAR' 2032   /
/
DATES
1 'APR' 2032   /
/
DATES
1 'MAY' 2032   /
/
DATES
1 'JUN' 2032   /
/
DATES
1 'JUL' 2032   /
/
DATES
1 'AUG' 2032   /
/
DATES
1 'SEP' 2032   /
/
DATES
1 'OCT' 2032   /
/
DATES
1 'NOV' 2032   /
/
DATES
1 'DEC' 2032   /
/
DATES
1 'JAN' 2033   /
/
GCONPROD
--NAME CONTROL ORAT  WRAT  GRAT  LRAT
'F'   'LRAT'   3*   12018.97078944552   /
/

GCONINJE
'F'  'WATER'  'REIN'   2*   1.4071365209355662  /
'F'  'GAS'    'REIN'   2*   0.36366510772527305 /
/
DATES
1 'FEB' 2033   /
/
DATES
1 'MAR' 2033   /
/
DATES
1 'APR' 2033   /
/
DATES
1 'MAY' 2033   /
/
DATES
1 'JUN' 2033   /
/
DATES
1 'JUL' 2033   /
/
DATES
1 'AUG' 2033   /
/
DATES
1 'SEP' 2033   /
/
DATES
1 'OCT' 2033   /
/
DATES
1 'NOV' 2033   /
/
DATES
1 'DEC' 2033   /
/
DATES
1 'JAN' 2034   /
/
DATES
1 'FEB' 2034   /
/
DATES
1 'MAR' 2034   /
/
DATES
1 'APR' 2034   /
/
DATES
1 'MAY' 2034   /
/
DATES
1 'JUN' 2034   /
/
DATES
1 'JUL' 2034   /
/
DATES
1 'AUG' 2034   /
/
DATES
1 'SEP' 2034   /
/
DATES
1 'OCT' 2034   /
/
DATES
1 'NOV' 2034   /
/
DATES
1 'DEC' 2034   /
/
DATES
1 'JAN' 2035   /
/
GCONPROD
--NAME CONTROL ORAT  WRAT  GRAT  LRAT
'F'   'LRAT'   3*   4012.241244900375   /
/

GCONINJE
'F'  'WATER'  'REIN'   2*   1.5605685566105905  /
'F'  'GAS'    'REIN'   2*   0.9587770742449262 /
/
DATES
1 'FEB' 2035   /
/
DATES
1 'MAR' 2035   /
/
DATES
1 'APR' 2035   /
/
DATES
1 'MAY' 2035   /
/
DATES
1 'JUN' 2035   /
/
DATES
1 'JUL' 2035   /
/
DATES
1 'AUG' 2035   /
/
DATES
1 'SEP' 2035   /
/
DATES
1 'OCT' 2035   /
/
DATES
1 'NOV' 2035   /
/
DATES
1 'DEC' 2035   /
/
END