
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pg_uuid_t ;
typedef int TimestampTz ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (unsigned char*,int *,int) ;
 unsigned char* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;

pg_uuid_t *
FUNC_4(void)
{




 unsigned char *VAR_1 = FUNC_2(VAR_0);
 bool VAR_2 = 0;


 VAR_2 = FUNC_3((char *) VAR_1, VAR_0);
 if (!VAR_2)
 {
  TimestampTz VAR_3 = FUNC_0();

  FUNC_1(&VAR_1[8], &VAR_3, sizeof(TimestampTz));
 }

 VAR_1[6] = (VAR_1[6] & 0x0f) | 0x40;
 VAR_1[8] = (VAR_1[8] & 0x3f) | 0x80;

 return (pg_uuid_t *) VAR_1;
}
