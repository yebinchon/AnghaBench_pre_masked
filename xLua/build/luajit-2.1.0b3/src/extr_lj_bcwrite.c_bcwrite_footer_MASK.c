
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ status; scalar_t__ (* wfunc ) (int ,int *,int,int ) ;int wdata; int sb; } ;
typedef TYPE_1__ BCWriteCtx ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *,int,int ) ;

__attribute__((used)) static void FUNC_2(BCWriteCtx *VAR_0)
{
  if (VAR_0->status == 0) {
    uint8_t VAR_1 = 0;
    VAR_0->status = VAR_0->wfunc(FUNC_0(&VAR_0->sb), &VAR_1, 1, VAR_0->wdata);
  }
}
