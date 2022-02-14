
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int gcc_uint64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (char*,int,int) ;
 size_t FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

int
FUNC_5 (char *VAR_8, int VAR_9)
{
  static const char VAR_10[]
    = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  static gcc_uint64_t VAR_11;



  char *VAR_12;
  size_t VAR_13;
  int VAR_14;

  VAR_13 = FUNC_3 (VAR_8);

  if ((int) VAR_13 < 6 + VAR_9
      || FUNC_4 (&VAR_8[VAR_13 - 6 - VAR_9], "XXXXXX", 6))
    {
      return -1;
    }

  VAR_12 = &VAR_8[VAR_13 - 6 - VAR_9];






  VAR_11 += FUNC_0 ();


  for (VAR_14 = 0; VAR_14 < VAR_6; ++VAR_14)
    {
      gcc_uint64_t VAR_15 = VAR_11;
      int VAR_16;


      VAR_12[0] = VAR_10[VAR_15 % 62];
      VAR_15 /= 62;
      VAR_12[1] = VAR_10[VAR_15 % 62];
      VAR_15 /= 62;
      VAR_12[2] = VAR_10[VAR_15 % 62];
      VAR_15 /= 62;
      VAR_12[3] = VAR_10[VAR_15 % 62];
      VAR_15 /= 62;
      VAR_12[4] = VAR_10[VAR_15 % 62];
      VAR_15 /= 62;
      VAR_12[5] = VAR_10[VAR_15 % 62];

      VAR_16 = FUNC_2 (VAR_8, VAR_2|VAR_5|VAR_3|VAR_4, 0600);
      if (VAR_16 >= 0)

 return VAR_16;
      if (VAR_7 != VAR_0



  )

 break;




      VAR_11 += 7777;
    }


  VAR_8[0] = '\0';
  return -1;
}
