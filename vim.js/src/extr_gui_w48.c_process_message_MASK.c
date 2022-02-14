
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char char_u ;
typedef char UINT ;
struct TYPE_14__ {int row; int col; scalar_t__ menu_is_active; } ;
struct TYPE_13__ {char key_sym; char vim_code1; int vim_code0; } ;
struct TYPE_12__ {scalar_t__ message; char wParam; scalar_t__ lParam; int hwnd; } ;
struct TYPE_11__ {int y; int x; } ;
typedef TYPE_1__ POINT ;
typedef TYPE_2__ MSG ;
typedef int DWORD ;



 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;


 char VAR_5 ;
 int VAR_6 ;
 char FUNC_5 (int) ;

 char FUNC_6 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char FUNC_7 (char,int) ;
 int FUNC_8 (int ,int ,TYPE_1__*,int) ;
 int FUNC_9 (TYPE_2__*) ;
 char VAR_10 ;
 int FUNC_10 (int ,scalar_t__,char,scalar_t__) ;
 scalar_t__ FUNC_11 (char*) ;
 int VAR_11 ;
 int FUNC_12 (int,char) ;
 int VAR_12 ;
 char VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 char VAR_16 ;
 char VAR_17 ;
 char VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (int,char*,int,int ) ;
 int * FUNC_16 (char*,int ,int ,int ,int ,int *,int *) ;
 scalar_t__ VAR_27 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_1__*) ;
 int VAR_28 ;
 TYPE_7__ VAR_29 ;
 scalar_t__ FUNC_19 () ;
 int FUNC_20 () ;
 int VAR_30 ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*,int *,int ,int ) ;
 scalar_t__ FUNC_23 (int *,TYPE_2__*) ;
 int * VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_24 (int,int*) ;
 scalar_t__ VAR_34 ;
 TYPE_3__* VAR_35 ;
 int FUNC_25 () ;
 int FUNC_26 (char*) ;
 scalar_t__ VAR_36 ;

__attribute__((used)) static void
FUNC_27(void)
{
    MSG VAR_37;
    UINT VAR_38 = 0;
    char_u VAR_39[40];
    int VAR_40;
    int VAR_41 = 0;
    int VAR_42;




    FUNC_22(&VAR_37, ((void*)0), 0, 0);
    if (VAR_37.message == VAR_21 || VAR_37.message == VAR_25)
    {
 VAR_38 = (int) VAR_37.wParam;

 if (VAR_27 && VAR_38 != VAR_17 && VAR_38 != VAR_16 && VAR_38 != VAR_14)
 {
     VAR_27 = 0;


     if (VAR_38 < 'A' || VAR_38 > 'Z' || (FUNC_2(VAR_14) & 0x8000))
     {
  MSG VAR_43;

  VAR_43.message = VAR_37.message;
  VAR_43.hwnd = VAR_37.hwnd;
  VAR_43.wParam = VAR_18;
  FUNC_9(&VAR_43);
  if (VAR_38 != VAR_18)
      FUNC_10(VAR_37.hwnd, VAR_37.message, VAR_37.wParam, VAR_37.lParam);
  return;
     }
 }


 if (VAR_38 == VAR_13)
 {
     FUNC_25();
     VAR_28 = VAR_12;
     VAR_39[0] = VAR_1;
     FUNC_14(VAR_39, 1);
 }

 for (VAR_40 = 0; VAR_35[VAR_40].key_sym != 0; VAR_40++)
 {

     if (VAR_35[VAR_40].key_sym == VAR_38
      && (VAR_38 != VAR_18 || !(FUNC_2(VAR_16) & 0x8000)))
     {
  if (FUNC_2(VAR_17) & 0x8000)
      VAR_41 |= VAR_9;
  if (FUNC_2(VAR_14) & 0x8000)
      VAR_41 |= VAR_8;
  if (FUNC_2(VAR_16) & 0x8000)
      VAR_41 |= VAR_7;

  if (VAR_35[VAR_40].vim_code1 == VAR_10)
      VAR_42 = VAR_35[VAR_40].vim_code0;
  else
      VAR_42 = FUNC_12(VAR_35[VAR_40].vim_code0,
         VAR_35[VAR_40].vim_code1);
  VAR_42 = FUNC_24(VAR_42, &VAR_41);
  if (VAR_42 == 131)
      VAR_42 = VAR_6;

  if (VAR_41)
  {
      VAR_39[0] = 131;
      VAR_39[1] = VAR_5;
      VAR_39[2] = VAR_41;
      FUNC_14(VAR_39, 3);
  }

  if (FUNC_4(VAR_42))
  {
      VAR_39[0] = 131;
      VAR_39[1] = FUNC_5(VAR_42);
      VAR_39[2] = FUNC_6(VAR_42);
      FUNC_14(VAR_39, 3);
  }
  else
  {
      int VAR_44;


      VAR_44 = FUNC_15(VAR_42, VAR_39, 40, VAR_4);
      FUNC_14(VAR_39, VAR_44);
  }
  break;
     }
 }
 if (VAR_35[VAR_40].key_sym == 0)
 {



     if (VAR_38 != 0xff
      && (FUNC_2(VAR_14) & 0x8000)
      && !(FUNC_2(VAR_17) & 0x8000)
      && !(FUNC_2(VAR_16) & 0x8000))
     {

  if (VAR_38 == '6' || FUNC_7(VAR_38, 2) == (UINT)'^')
  {
      VAR_39[0] = VAR_2;
      FUNC_14(VAR_39, 1);
  }

  else if (VAR_38 == 0xBD)
  {
      VAR_39[0] = VAR_3;
      FUNC_14(VAR_39, 1);
  }

  else if (VAR_38 == '2' || FUNC_7(VAR_38, 2) == (UINT)'@')
  {
      VAR_39[0] = VAR_0;
      FUNC_14(VAR_39, 1);
  }
  else
      FUNC_9(&VAR_37);
     }
     else
  FUNC_9(&VAR_37);
 }
    }
 FUNC_21(&VAR_37);
}
