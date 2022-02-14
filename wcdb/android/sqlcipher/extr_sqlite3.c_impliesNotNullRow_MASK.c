
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int iCur; } ;
struct TYPE_16__ {int eCode; TYPE_1__ u; } ;
typedef TYPE_6__ Walker ;
struct TYPE_17__ {int op; TYPE_5__* pRight; TYPE_3__* pLeft; int iTable; } ;
struct TYPE_14__ {int pTab; } ;
struct TYPE_15__ {int const op; TYPE_4__ y; } ;
struct TYPE_12__ {int pTab; } ;
struct TYPE_13__ {int const op; TYPE_2__ y; } ;
typedef TYPE_7__ Expr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_7__*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(Walker *VAR_6, Expr *VAR_7){
  FUNC_2( VAR_7->op==VAR_1 );
  FUNC_2( VAR_7->op==VAR_2 );
  if( FUNC_0(VAR_7, VAR_0) ) return VAR_5;
  switch( VAR_7->op ){
    case 135:
    case 130:
    case 134:
    case 129:
    case 136:
    case 128:
    case 143:
    case 137:
    case 140:
      FUNC_2( VAR_7->op==135 );
      FUNC_2( VAR_7->op==130 );
      FUNC_2( VAR_7->op==134 );
      FUNC_2( VAR_7->op==129 );
      FUNC_2( VAR_7->op==136 );
      FUNC_2( VAR_7->op==128 );
      FUNC_2( VAR_7->op==143 );
      FUNC_2( VAR_7->op==137 );
      FUNC_2( VAR_7->op==140 );
      return VAR_5;
    case 142:
      if( VAR_6->u.iCur==VAR_7->iTable ){
        VAR_6->eCode = 1;
        return VAR_3;
      }
      return VAR_5;




    case 141:
    case 131:
    case 132:
    case 133:
    case 138:
    case 139:
      FUNC_2( VAR_7->op==141 );
      FUNC_2( VAR_7->op==131 );
      FUNC_2( VAR_7->op==132 );
      FUNC_2( VAR_7->op==133 );
      FUNC_2( VAR_7->op==138 );
      FUNC_2( VAR_7->op==139 );
      if( (VAR_7->pLeft->op==142 && FUNC_1(VAR_7->pLeft->y.pTab))
       || (VAR_7->pRight->op==142 && FUNC_1(VAR_7->pRight->y.pTab))
      ){
       return VAR_5;
      }
    default:
      return VAR_4;
  }
}
