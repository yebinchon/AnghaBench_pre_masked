
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int FormData_hypertable_compression ;
typedef int AttrNumber ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static AttrNumber
FUNC_3(FormData_hypertable_compression *VAR_1,
         Oid VAR_2)
{
 char *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3 == ((void*)0))
  FUNC_1(VAR_0, "could not find meta column");

 return FUNC_2(VAR_2, VAR_3);
}
