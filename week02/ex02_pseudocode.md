โจทย์ A

BEGIN [ตรวจสอบเกรด]
INPUT score 

IF score >= 80? THEN grade = "A"

ELSE IF score >= 70 THEN 

grade = "B"

ELSE IF score >= 60 THEN 

grade = "C"

ELSE IF score >= 50 THEN

grade = "D"

ELSE

grade = "F"

END IF
OUTPUT grade
END


โจทย์ B

BEGIN [หาค่าสูงสุดจาก2ตัวเลข]

INPUT a&b

IF a > b? THEN

    SHOW a

ELSE 

    SHOW b

END IF 

END


โจทย์ C

INPUT N

i = 1

FOR i FROM 1 TO N DO

    พิมพ์ i

    i = i+1

END FOR


WHLIE i <=N Do

    พิมพ์ i

    i=i+1

END WHLIE

END
