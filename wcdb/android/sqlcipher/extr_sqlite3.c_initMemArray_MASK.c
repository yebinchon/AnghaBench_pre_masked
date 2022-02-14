
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
typedef int sqlite3 ;
struct TYPE_3__ {scalar_t__ pScopyFrom; scalar_t__ szMalloc; int flags; int * db; } ;
typedef TYPE_1__ Mem ;



__attribute__((used)) static void FUNC_0(Mem *VAR_0, int VAR_1, sqlite3 *VAR_2, u16 VAR_3){
  while( (VAR_1--)>0 ){
    VAR_0->db = VAR_2;
    VAR_0->flags = VAR_3;
    VAR_0->szMalloc = 0;



    VAR_0++;
  }
}
