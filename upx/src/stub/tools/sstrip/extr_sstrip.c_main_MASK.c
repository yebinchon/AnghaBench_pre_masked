
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Elf64_Phdr ;
typedef int Elf64_Ehdr ;
typedef int Elf32_Phdr ;
typedef int Elf32_Ehdr ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int *,int *,unsigned long) ;
 int FUNC_2 (int,int *,int *,unsigned long) ;
 int FUNC_3 (char*) ;
 char* VAR_3 ;
 int FUNC_4 (int *,int *,unsigned long*) ;
 int FUNC_5 (int *,int *,unsigned long*) ;
 int FUNC_6 (int *,int *,unsigned long) ;
 int FUNC_7 (int *,int *,unsigned long) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*) ;
 char* VAR_4 ;
 int FUNC_10 (int,int *) ;
 int FUNC_11 (int,int *) ;
 int FUNC_12 (int,int *) ;
 int FUNC_13 (int,int *,int **) ;
 int FUNC_14 (int,int *,int **) ;
 int FUNC_15 (int,unsigned long*) ;

int FUNC_16(int VAR_5, char *VAR_6[])
{
    int VAR_7;
    union {
        Elf32_Ehdr ehdr32;
        Elf64_Ehdr ehdr64;
    } VAR_8;
    union {
        Elf32_Phdr *phdrs32;
        Elf64_Phdr *phdrs64;
    } VAR_9;
    unsigned long VAR_10;
    char **VAR_11;
    int VAR_12 = 0;

    if (VAR_5 < 2 || VAR_6[1][0] == '-') {
        FUNC_9("Usage: sstrip FILE...\n"
               "sstrip discards all nonessential bytes from an executable.\n\n"
               "Version 2.0-X Copyright (C) 2000,2001 Brian Raiter.\n"
               "Cross-devel hacks Copyright (C) 2004 Manuel Novoa III.\n"
               "This program is free software, licensed under the GNU\n"
               "General Public License. There is absolutely no warranty.\n");
        return VAR_1;
    }

    VAR_4 = VAR_6[0];

    for (VAR_11 = VAR_6 + 1 ; *VAR_11 != ((void*)0) ; ++VAR_11) {
        VAR_3 = *VAR_11;

        VAR_7 = FUNC_8(*VAR_11, VAR_2);
        if (VAR_7 < 0) {
            FUNC_3("can't open");
            ++VAR_12;
            continue;
        }

        switch (FUNC_12(VAR_7, &VAR_8.ehdr32)) {
            case 129:
                if (!(FUNC_10(VAR_7, &VAR_8.ehdr32) &&
                      FUNC_13(VAR_7, &VAR_8.ehdr32, &VAR_9.phdrs32) &&
                      FUNC_4(&VAR_8.ehdr32, VAR_9.phdrs32, &VAR_10) &&
                      FUNC_15(VAR_7, &VAR_10) &&
                      FUNC_6(&VAR_8.ehdr32, VAR_9.phdrs32, VAR_10) &&
                      FUNC_1(VAR_7, &VAR_8.ehdr32, VAR_9.phdrs32, VAR_10)))
                    ++VAR_12;
                break;
            case 128:
                if (!(FUNC_11(VAR_7, &VAR_8.ehdr64) &&
                      FUNC_14(VAR_7, &VAR_8.ehdr64, &VAR_9.phdrs64) &&
                      FUNC_5(&VAR_8.ehdr64, VAR_9.phdrs64, &VAR_10) &&
                      FUNC_15(VAR_7, &VAR_10) &&
                      FUNC_7(&VAR_8.ehdr64, VAR_9.phdrs64, VAR_10) &&
                      FUNC_2(VAR_7, &VAR_8.ehdr64, VAR_9.phdrs64, VAR_10)))
                    ++VAR_12;
                break;
            default:
                ++VAR_12;
                break;
        }
        FUNC_0(VAR_7);
    }

    return VAR_12 ? VAR_0 : VAR_1;
}
