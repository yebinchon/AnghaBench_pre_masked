
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_value ;
struct TYPE_11__ {scalar_t__ enc; int (* xCmp ) (int ,int ,void const*,int ,void const*) ;int pUser; } ;
struct TYPE_10__ {scalar_t__ enc; void const* z; int n; int db; } ;
typedef TYPE_1__ Mem ;
typedef TYPE_2__ CollSeq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__ const*,int ) ;
 int FUNC_4 (int ,int ,void const*,int ,void const*) ;
 int FUNC_5 (int ,int ,void const*,int ,void const*) ;

__attribute__((used)) static int FUNC_6(
  const Mem *VAR_3,
  const Mem *VAR_4,
  const CollSeq *VAR_5,
  u8 *VAR_6
){
  if( VAR_3->enc==VAR_5->enc ){


    return VAR_5->xCmp(VAR_5->pUser,VAR_3->n,VAR_3->z,VAR_4->n,VAR_4->z);
  }else{
    int VAR_7;
    const void *VAR_8, *VAR_9;
    Mem VAR_10;
    Mem VAR_11;
    FUNC_1(&VAR_10, VAR_3->db, VAR_1);
    FUNC_1(&VAR_11, VAR_3->db, VAR_1);
    FUNC_3(&VAR_10, VAR_3, VAR_0);
    FUNC_3(&VAR_11, VAR_4, VAR_0);
    VAR_8 = FUNC_0((sqlite3_value*)&VAR_10, VAR_5->enc);
    VAR_9 = FUNC_0((sqlite3_value*)&VAR_11, VAR_5->enc);
    if( (VAR_8==0 || VAR_9==0) ){
      if( VAR_6 ) *VAR_6 = VAR_2;
      VAR_7 = 0;
    }else{
      VAR_7 = VAR_5->xCmp(VAR_5->pUser, VAR_10, VAR_8, VAR_11, VAR_9);
    }
    FUNC_2(&VAR_10);
    FUNC_2(&VAR_11);
    return VAR_7;
  }
}
