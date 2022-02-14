
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ k; } ;
struct ConsControl {scalar_t__ na; scalar_t__ nh; scalar_t__ tostore; TYPE_3__ v; TYPE_3__* t; } ;
typedef TYPE_3__ expdesc ;
struct TYPE_22__ {TYPE_2__* f; } ;
struct TYPE_18__ {char token; } ;
struct TYPE_21__ {int linenumber; TYPE_1__ t; TYPE_5__* fs; } ;
struct TYPE_19__ {int * code; } ;
typedef TYPE_4__ LexState ;
typedef TYPE_5__ FuncState ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_4__*,char,char,int) ;
 int FUNC_3 (TYPE_4__*,char) ;
 int FUNC_4 (TYPE_5__*,struct ConsControl*) ;
 int FUNC_5 (TYPE_4__*,struct ConsControl*) ;
 int FUNC_6 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_7 (TYPE_5__*,struct ConsControl*) ;
 int FUNC_8 (TYPE_5__*,int ,int ,int ,int ) ;
 int FUNC_9 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (TYPE_4__*,char) ;

__attribute__((used)) static void FUNC_13 (LexState *VAR_3, expdesc *VAR_4) {


  FuncState *VAR_5 = VAR_3->fs;
  int VAR_6 = VAR_3->linenumber;
  int VAR_7 = FUNC_8(VAR_5, VAR_0, 0, 0, 0);
  struct ConsControl VAR_8;
  VAR_8.na = VAR_8.nh = VAR_8.tostore = 0;
  VAR_8.t = VAR_4;
  FUNC_6(VAR_4, VAR_1, VAR_7);
  FUNC_6(&VAR_8.v, VAR_2, 0);
  FUNC_9(VAR_3->fs, VAR_4);
  FUNC_3(VAR_3, '{');
  do {
    FUNC_11(VAR_8.v.k == VAR_2 || VAR_8.tostore > 0);
    if (VAR_3->t.token == '}') break;
    FUNC_4(VAR_5, &VAR_8);
    FUNC_5(VAR_3, &VAR_8);
  } while (FUNC_12(VAR_3, ',') || FUNC_12(VAR_3, ';'));
  FUNC_2(VAR_3, '}', '{', VAR_6);
  FUNC_7(VAR_5, &VAR_8);
  FUNC_0(VAR_5->f->code[VAR_7], FUNC_10(VAR_8.na));
  FUNC_1(VAR_5->f->code[VAR_7], FUNC_10(VAR_8.nh));
}
