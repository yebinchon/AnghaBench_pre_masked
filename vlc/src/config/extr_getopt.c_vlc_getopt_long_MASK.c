
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* arg; int ind; int first_nonopt; int last_nonopt; char* nextchar; char opt; } ;
typedef TYPE_1__ vlc_getopt_t ;
struct vlc_option {char* name; char val; char* flag; scalar_t__ has_arg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char**,TYPE_1__*) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char* const,char*) ;
 unsigned int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;

int FUNC_5(int VAR_1, char *const *VAR_2,
                    const char *VAR_3,
                    const struct vlc_option *restrict VAR_4, int *VAR_5,
                    vlc_getopt_t *restrict VAR_6)
{
    VAR_6->arg = ((void*)0);

    if (VAR_6->ind == 0)
    {




        VAR_6->first_nonopt = VAR_6->last_nonopt = VAR_6->ind = 1;
        VAR_6->nextchar = ((void*)0);
    }



    if (VAR_6->nextchar == ((void*)0) || *VAR_6->nextchar == '\0')
    {




        if (VAR_6->last_nonopt > VAR_6->ind)
            VAR_6->last_nonopt = VAR_6->ind;
        if (VAR_6->first_nonopt > VAR_6->ind)
            VAR_6->first_nonopt = VAR_6->ind;




        if (VAR_6->first_nonopt != VAR_6->last_nonopt
            && VAR_6->last_nonopt != VAR_6->ind)
            FUNC_0((char **) VAR_2, VAR_6);
        else if (VAR_6->last_nonopt != VAR_6->ind)
            VAR_6->first_nonopt = VAR_6->ind;




        while (VAR_6->ind < VAR_1 && (VAR_2[VAR_6->ind][0] != '-' || VAR_2[VAR_6->ind][1] == '\0'))
            VAR_6->ind++;
        VAR_6->last_nonopt = VAR_6->ind;






        if (VAR_6->ind != VAR_1 && !FUNC_2(VAR_2[VAR_6->ind], "--"))
        {
            VAR_6->ind++;

            if (VAR_6->first_nonopt != VAR_6->last_nonopt
                && VAR_6->last_nonopt != VAR_6->ind)
                FUNC_0((char **) VAR_2, VAR_6);
            else if (VAR_6->first_nonopt == VAR_6->last_nonopt)
                VAR_6->first_nonopt = VAR_6->ind;
            VAR_6->last_nonopt = VAR_1;

            VAR_6->ind = VAR_1;
        }




        if (VAR_6->ind == VAR_1)
        {


            if (VAR_6->first_nonopt != VAR_6->last_nonopt)
                VAR_6->ind = VAR_6->first_nonopt;
            return -1;
        }




        if ((VAR_2[VAR_6->ind][0] != '-' || VAR_2[VAR_6->ind][1] == '\0'))
        {
            VAR_6->arg = VAR_2[VAR_6->ind++];
            return 1;
        }




        VAR_6->nextchar = (VAR_2[VAR_6->ind] + 1
                        + (VAR_2[VAR_6->ind][1] == '-'));
    }





    if (VAR_2[VAR_6->ind][1] == '-')
    {
        char *VAR_7;
        const struct vlc_option *VAR_8;
        const struct vlc_option *VAR_9 = ((void*)0);
        int VAR_10 = 0;
        int VAR_11 = 0;
        int VAR_12 = -1;
        int VAR_13;

        for (VAR_7 = VAR_6->nextchar; *VAR_7 && *VAR_7 != '='; VAR_7++)
                               ;



        for (VAR_8 = VAR_4, VAR_13 = 0; VAR_8->name; VAR_8++, VAR_13++)
            if (!FUNC_4(VAR_8->name, VAR_6->nextchar, VAR_7 - VAR_6->nextchar))
            {
                if ((unsigned int) (VAR_7 - VAR_6->nextchar)
                    == (unsigned int) FUNC_3(VAR_8->name))
                {

                    VAR_9 = VAR_8;
                    VAR_12 = VAR_13;
                    VAR_10 = 1;
                    break;
                }
                else if (VAR_9 == ((void*)0))
                {

                    VAR_9 = VAR_8;
                    VAR_12 = VAR_13;
                }
                else

                    VAR_11 = 1;
            }

        if (VAR_11 && !VAR_10)
        {
            VAR_6->nextchar += FUNC_3(VAR_6->nextchar);
            VAR_6->ind++;
            VAR_6->opt = 0;
            return '?';
        }

        if (VAR_9 != ((void*)0))
        {
            VAR_13 = VAR_12;
            VAR_6->ind++;
            if (*VAR_7)
            {
                if (VAR_9->has_arg)
                    VAR_6->arg = VAR_7 + 1;
                else
                {
                    VAR_6->nextchar += FUNC_3(VAR_6->nextchar);

                    VAR_6->opt = VAR_9->val;
                    return '?';
                }
            }
            else if (VAR_9->has_arg)
            {
                if (VAR_6->ind < VAR_1)
                    VAR_6->arg = VAR_2[VAR_6->ind++];
                else
                {
                    VAR_6->nextchar += FUNC_3(VAR_6->nextchar);
                    VAR_6->opt = VAR_9->val;
                    return VAR_3[0] == ':' ? ':' : '?';
                }
            }
            VAR_6->nextchar += FUNC_3(VAR_6->nextchar);
            if (VAR_5 != ((void*)0))
                *VAR_5 = VAR_13;
            if (VAR_9->flag)
            {
                *(VAR_9->flag) = VAR_9->val;
                return 0;
            }
            return VAR_9->val;
        }

        VAR_6->nextchar = (char *) "";
        VAR_6->ind++;
        VAR_6->opt = 0;
        return '?';
    }



    {
        char VAR_14 = *(VAR_6->nextchar)++;
        char *VAR_15 = FUNC_1(VAR_3, VAR_14);


        if (*VAR_6->nextchar == '\0')
            ++VAR_6->ind;

        if (VAR_15 == ((void*)0) || VAR_14 == ':')
        {
            VAR_6->opt = VAR_14;
            return '?';
        }

        if (VAR_15[0] == 'W' && VAR_15[1] == ';')
        {
            char *VAR_16;
            const struct vlc_option *VAR_17;
            const struct vlc_option *VAR_18 = ((void*)0);
            int VAR_19 = 0;
            int VAR_20 = 0;
            int VAR_21 = 0;
            int VAR_22;


            if (*VAR_6->nextchar != '\0')
            {
                VAR_6->arg = VAR_6->nextchar;


                VAR_6->ind++;
            }
            else if (VAR_6->ind == VAR_1)
            {
                VAR_6->opt = VAR_14;
                if (VAR_3[0] == ':')
                    VAR_14 = ':';
                else
                    VAR_14 = '?';
                return VAR_14;
            }
            else


                VAR_6->arg = VAR_2[VAR_6->ind++];




            for (VAR_6->nextchar = VAR_16 = VAR_6->arg; *VAR_16 && *VAR_16 != '='; VAR_16++)
                                   ;



            for (VAR_17 = VAR_4, VAR_22 = 0; VAR_17->name; VAR_17++, VAR_22++)
                if (!FUNC_4(VAR_17->name, VAR_6->nextchar, VAR_16 - VAR_6->nextchar))
                {
                    if ((unsigned int) (VAR_16 - VAR_6->nextchar)
                        == FUNC_3(VAR_17->name))
                    {

                        VAR_18 = VAR_17;
                        VAR_21 = VAR_22;
                        VAR_19 = 1;
                        break;
                    }
                    else if (VAR_18 == ((void*)0))
                    {

                        VAR_18 = VAR_17;
                        VAR_21 = VAR_22;
                    }
                    else

                        VAR_20 = 1;
                }
            if (VAR_20 && !VAR_19)
            {
                VAR_6->nextchar += FUNC_3(VAR_6->nextchar);
                VAR_6->ind++;
                return '?';
            }
            if (VAR_18 != ((void*)0))
            {
                VAR_22 = VAR_21;
                if (*VAR_16)
                {
                    if (VAR_18->has_arg)
                        VAR_6->arg = VAR_16 + 1;
                    else
                    {
                        VAR_6->nextchar += FUNC_3(VAR_6->nextchar);
                        return '?';
                    }
                }
                else if (VAR_18->has_arg)
                {
                    if (VAR_6->ind < VAR_1)
                        VAR_6->arg = VAR_2[VAR_6->ind++];
                    else
                    {
                        VAR_6->nextchar += FUNC_3(VAR_6->nextchar);
                        return VAR_3[0] == ':' ? ':' : '?';
                    }
                }
                VAR_6->nextchar += FUNC_3(VAR_6->nextchar);
                if (VAR_5 != ((void*)0))
                    *VAR_5 = VAR_22;
                if (VAR_18->flag)
                {
                    *(VAR_18->flag) = VAR_18->val;
                    return 0;
                }
                return VAR_18->val;
            }
            VAR_6->nextchar = ((void*)0);
            return 'W';
        }
        if (VAR_15[1] == ':')
        {

            if (*VAR_6->nextchar != '\0')
            {
                VAR_6->arg = VAR_6->nextchar;


                VAR_6->ind++;
            }
            else if (VAR_6->ind == VAR_1)
            {
                VAR_6->opt = VAR_14;
                if (VAR_3[0] == ':')
                    VAR_14 = ':';
                else
                    VAR_14 = '?';
            }
            else


                VAR_6->arg = VAR_2[VAR_6->ind++];
            VAR_6->nextchar = ((void*)0);
        }
        return VAR_14;
    }
}
