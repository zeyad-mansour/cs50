{"filter":false,"title":"finder.c","tooltip":"~/workspace/unit4/finder/finder.c","undoManager":{"mark":63,"position":63,"stack":[[{"start":{"row":37,"column":0},"end":{"row":37,"column":24},"action":"remove","lines":["int seek(directory dir);"],"id":2},{"start":{"row":37,"column":0},"end":{"row":97,"column":1},"action":"insert","lines":["int seek(directory dir)","{","    dir = populate(dir);","","    for(int i = 0; i < dir.npaths; i++)","    {","        if(strcmp(dir.paths[i].type,\"file\") == 0 && strcmp(dir.paths[i].name,\"./found.txt\") != 0 && strcmp(dir.paths[i].name,\"./finder\") != 0)","        {","            FILE *fr = fopen(dir.paths[i].name,\"r\");","            if(fr == NULL)","            {","                return 1;","            }","            bool search = false;","\t\t\tchar word[50];","            while(fgets(word,sizeof(word),fr) != NULL)","            {","                char *sub;","                sub = strstr(word,input);","                if(sub == NULL)","                {","                    sub = word;","                }","           ","                if(strlen(sub) > strlen(input))","                {","                    sub[strlen(input)] = '\\0';","                }","","                if(strcmp(sub,input) == 0)","                {","                    FILE *fw = fopen(\"search.txt\",\"a\");","                    if (fw == NULL)","                    {","                        return 1;","                    }","                    if(!search)","                    {","                        fputs(\"for inputword \",fw);","                        fputs(input,fw);","                        fputs(\" in \",fw);","                        fputs(dir.paths[i].name,fw);","                        fputs(\":\\n\",fw);","                        search = true;","                    }","                    fputs(input,fw);","                    fputs(\"\\n\",fw);","                    fclose(fw);","                }","            }","            fclose(fr);","        }","        else if(strcmp(dir.paths[i].type,\"directory\") == 0)","        {","            directory new_dir;","            new_dir.name = dir.paths[i].name;","            seek(new_dir);","        }","    }","    return 0;","}"]}],[{"start":{"row":100,"column":0},"end":{"row":111,"column":1},"action":"remove","lines":["int main(int argc, char *argv[])","{","","    // TODO: ensure proper number of command line arguments","","    // Create initial directory and set name string","    directory dir;","","    // TODO: set \"dir\"s name based on command line arguments entered","","    return seek(dir);","}"],"id":3},{"start":{"row":100,"column":0},"end":{"row":122,"column":1},"action":"insert","lines":["","int main(int argc, char* argv[])","{","","    // TODO: ensure proper number of command line arguments","    if(argc != 2 && argc != 3)","    {","        return 1;","    }","","\t\tinput = argv[1];","    directory dir;","","    // TODO: set \"dir\"s name based on command line arguments entered","    if(argc == 3){","        dir.name = argv[2];","    }","    else","    {","        dir.name  = \"./\";","    }","    seek(dir);","}"]}],[{"start":{"row":38,"column":0},"end":{"row":88,"column":9},"action":"remove","lines":["{","    dir = populate(dir);","","    for(int i = 0; i < dir.npaths; i++)","    {","        if(strcmp(dir.paths[i].type,\"file\") == 0 && strcmp(dir.paths[i].name,\"./found.txt\") != 0 && strcmp(dir.paths[i].name,\"./finder\") != 0)","        {","            FILE *fr = fopen(dir.paths[i].name,\"r\");","            if(fr == NULL)","            {","                return 1;","            }","            bool search = false;","\t\t\tchar word[50];","            while(fgets(word,sizeof(word),fr) != NULL)","            {","                char *sub;","                sub = strstr(word,input);","                if(sub == NULL)","                {","                    sub = word;","                }","           ","                if(strlen(sub) > strlen(input))","                {","                    sub[strlen(input)] = '\\0';","                }","","                if(strcmp(sub,input) == 0)","                {","                    FILE *fw = fopen(\"search.txt\",\"a\");","                    if (fw == NULL)","                    {","                        return 1;","                    }","                    if(!search)","                    {","                        fputs(\"for inputword \",fw);","                        fputs(input,fw);","                        fputs(\" in \",fw);","                        fputs(dir.paths[i].name,fw);","                        fputs(\":\\n\",fw);","                        search = true;","                    }","                    fputs(input,fw);","                    fputs(\"\\n\",fw);","                    fclose(fw);","                }","            }","            fclose(fr);","        }"],"id":4}],[{"start":{"row":37,"column":23},"end":{"row":37,"column":24},"action":"insert","lines":[":"],"id":5}],[{"start":{"row":37,"column":23},"end":{"row":37,"column":24},"action":"remove","lines":[":"],"id":6}],[{"start":{"row":37,"column":23},"end":{"row":37,"column":24},"action":"insert","lines":[";"],"id":7}],[{"start":{"row":39,"column":0},"end":{"row":48,"column":0},"action":"remove","lines":["        else if(strcmp(dir.paths[i].type,\"directory\") == 0)","        {","            directory new_dir;","            new_dir.name = dir.paths[i].name;","            seek(new_dir);","        }","    }","    return 0;","}",""],"id":8},{"start":{"row":38,"column":0},"end":{"row":39,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":39,"column":0},"end":{"row":40,"column":0},"action":"remove","lines":["",""],"id":9},{"start":{"row":38,"column":0},"end":{"row":39,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":48,"column":2},"end":{"row":48,"column":18},"action":"remove","lines":["input = argv[1];"],"id":10},{"start":{"row":48,"column":1},"end":{"row":48,"column":2},"action":"remove","lines":["\t"]},{"start":{"row":48,"column":0},"end":{"row":48,"column":1},"action":"remove","lines":["\t"]},{"start":{"row":47,"column":0},"end":{"row":48,"column":0},"action":"remove","lines":["",""]},{"start":{"row":46,"column":5},"end":{"row":47,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":47,"column":18},"end":{"row":48,"column":0},"action":"insert","lines":["",""],"id":11},{"start":{"row":48,"column":0},"end":{"row":48,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":48,"column":4},"end":{"row":48,"column":20},"action":"insert","lines":["input = argv[1];"],"id":12}],[{"start":{"row":123,"column":0},"end":{"row":128,"column":0},"action":"remove","lines":["int seek(directory dir)","{","    // TODO","    return -1;","}",""],"id":13},{"start":{"row":123,"column":0},"end":{"row":183,"column":1},"action":"insert","lines":["int seek(directory dir)","{","    dir = populate(dir);","","    for(int i = 0; i < dir.npaths; i++)","    {","        if(strcmp(dir.paths[i].type,\"file\") == 0 && strcmp(dir.paths[i].name,\"./found.txt\") != 0 && strcmp(dir.paths[i].name,\"./finder\") != 0)","        {","            FILE *fr = fopen(dir.paths[i].name,\"r\");","            if(fr == NULL)","            {","                return 1;","            }","            bool search = false;","\t\t\tchar word[50];","            while(fgets(word,sizeof(word),fr) != NULL)","            {","                char *sub;","                sub = strstr(word,input);","                if(sub == NULL)","                {","                    sub = word;","                }","           ","                if(strlen(sub) > strlen(input))","                {","                    sub[strlen(input)] = '\\0';","                }","","                if(strcmp(sub,input) == 0)","                {","                    FILE *fw = fopen(\"search.txt\",\"a\");","                    if (fw == NULL)","                    {","                        return 1;","                    }","                    if(!search)","                    {","                        fputs(\"for inputword \",fw);","                        fputs(input,fw);","                        fputs(\" in \",fw);","                        fputs(dir.paths[i].name,fw);","                        fputs(\":\\n\",fw);","                        search = true;","                    }","                    fputs(input,fw);","                    fputs(\"\\n\",fw);","                    fclose(fw);","                }","            }","            fclose(fr);","        }","        else if(strcmp(dir.paths[i].type,\"directory\") == 0)","        {","            directory new_dir;","            new_dir.name = dir.paths[i].name;","            seek(new_dir);","        }","    }","    return 0;","}"]}],[{"start":{"row":152,"column":26},"end":{"row":152,"column":29},"action":"remove","lines":["sub"],"id":14},{"start":{"row":152,"column":26},"end":{"row":152,"column":27},"action":"insert","lines":["o"]},{"start":{"row":152,"column":27},"end":{"row":152,"column":28},"action":"insert","lines":["t"]},{"start":{"row":152,"column":28},"end":{"row":152,"column":29},"action":"insert","lines":["h"]},{"start":{"row":152,"column":29},"end":{"row":152,"column":30},"action":"insert","lines":["e"]},{"start":{"row":152,"column":30},"end":{"row":152,"column":31},"action":"insert","lines":["r"]}],[{"start":{"row":152,"column":26},"end":{"row":152,"column":31},"action":"remove","lines":["other"],"id":15},{"start":{"row":152,"column":26},"end":{"row":152,"column":27},"action":"insert","lines":["s"]},{"start":{"row":152,"column":27},"end":{"row":152,"column":28},"action":"insert","lines":["u"]},{"start":{"row":152,"column":28},"end":{"row":152,"column":29},"action":"insert","lines":["b"]}],[{"start":{"row":123,"column":0},"end":{"row":183,"column":1},"action":"remove","lines":["int seek(directory dir)","{","    dir = populate(dir);","","    for(int i = 0; i < dir.npaths; i++)","    {","        if(strcmp(dir.paths[i].type,\"file\") == 0 && strcmp(dir.paths[i].name,\"./found.txt\") != 0 && strcmp(dir.paths[i].name,\"./finder\") != 0)","        {","            FILE *fr = fopen(dir.paths[i].name,\"r\");","            if(fr == NULL)","            {","                return 1;","            }","            bool search = false;","\t\t\tchar word[50];","            while(fgets(word,sizeof(word),fr) != NULL)","            {","                char *sub;","                sub = strstr(word,input);","                if(sub == NULL)","                {","                    sub = word;","                }","           ","                if(strlen(sub) > strlen(input))","                {","                    sub[strlen(input)] = '\\0';","                }","","                if(strcmp(sub,input) == 0)","                {","                    FILE *fw = fopen(\"search.txt\",\"a\");","                    if (fw == NULL)","                    {","                        return 1;","                    }","                    if(!search)","                    {","                        fputs(\"for inputword \",fw);","                        fputs(input,fw);","                        fputs(\" in \",fw);","                        fputs(dir.paths[i].name,fw);","                        fputs(\":\\n\",fw);","                        search = true;","                    }","                    fputs(input,fw);","                    fputs(\"\\n\",fw);","                    fclose(fw);","                }","            }","            fclose(fr);","        }","        else if(strcmp(dir.paths[i].type,\"directory\") == 0)","        {","            directory new_dir;","            new_dir.name = dir.paths[i].name;","            seek(new_dir);","        }","    }","    return 0;","}"],"id":16},{"start":{"row":123,"column":0},"end":{"row":183,"column":1},"action":"insert","lines":["int seek(directory dir)","{","    dir = populate(dir);","","    for(int i = 0; i < dir.npaths; i++)","    {","        if(strcmp(dir.paths[i].type,\"file\") == 0 && strcmp(dir.paths[i].name,\"./found.txt\") != 0 && strcmp(dir.paths[i].name,\"./finder\") != 0)","        {","            FILE *fr = fopen(dir.paths[i].name,\"r\");","            if(fr == NULL)","            {","                return 1;","            }","            bool search = false;","\t\t\tchar search_string[50];","            while(fgets(search_string,sizeof(search_string),fr) != NULL)","            {","                char *sub_dir;","                sub_dir = strstr(search_string,input);","                if(sub_dir == NULL)","                {","                    sub_dir = search_string;","                }","           ","                if(strlen(sub_dir) > strlen(input))","                {","                    sub_dir[strlen(input)] = '\\0';","                }","","                if(strcmp(sub_dir,input) == 0)","                {","                    FILE *fw = fopen(\"search.txt\",\"a\");","                    if (fw == NULL)","                    {","                        return 1;","                    }","                    if(!search)","                    {","                        fputs(\"for inputsearch_string \",fw);","                        fputs(input,fw);","                        fputs(\" in \",fw);","                        fputs(dir.paths[i].name,fw);","                        fputs(\":\\n\",fw);","                        search = true;","                    }","                    fputs(input,fw);","                    fputs(\"\\n\",fw);","                    fclose(fw);","                }","            }","            fclose(fr);","        }","        else if(strcmp(dir.paths[i].type,\"directory\") == 0)","        {","            directory new_dir;","            new_dir.name = dir.paths[i].name;","            seek(new_dir);","        }","    }","    return 0;","}"]}],[{"start":{"row":125,"column":24},"end":{"row":126,"column":0},"action":"remove","lines":["",""],"id":17}],[{"start":{"row":181,"column":0},"end":{"row":181,"column":13},"action":"remove","lines":["    return 0;"],"id":18},{"start":{"row":180,"column":5},"end":{"row":181,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":145,"column":0},"end":{"row":145,"column":11},"action":"remove","lines":["           "],"id":19}],[{"start":{"row":43,"column":7},"end":{"row":43,"column":19},"action":"remove","lines":["argc != 2 &&"],"id":20}],[{"start":{"row":43,"column":17},"end":{"row":43,"column":18},"action":"insert","lines":[" "],"id":21}],[{"start":{"row":43,"column":18},"end":{"row":43,"column":30},"action":"insert","lines":["argc != 2 &&"],"id":22}],[{"start":{"row":43,"column":29},"end":{"row":43,"column":30},"action":"remove","lines":["&"],"id":23},{"start":{"row":43,"column":28},"end":{"row":43,"column":29},"action":"remove","lines":["&"]},{"start":{"row":43,"column":27},"end":{"row":43,"column":28},"action":"remove","lines":[" "]}],[{"start":{"row":43,"column":18},"end":{"row":43,"column":19},"action":"insert","lines":["&"],"id":24},{"start":{"row":43,"column":19},"end":{"row":43,"column":20},"action":"insert","lines":["&"]}],[{"start":{"row":43,"column":20},"end":{"row":43,"column":21},"action":"insert","lines":[" "],"id":25}],[{"start":{"row":43,"column":7},"end":{"row":43,"column":8},"action":"remove","lines":[" "],"id":26}],[{"start":{"row":153,"column":38},"end":{"row":153,"column":44},"action":"remove","lines":["search"],"id":27},{"start":{"row":153,"column":38},"end":{"row":153,"column":39},"action":"insert","lines":["f"]},{"start":{"row":153,"column":39},"end":{"row":153,"column":40},"action":"insert","lines":["o"]},{"start":{"row":153,"column":40},"end":{"row":153,"column":41},"action":"insert","lines":["u"]},{"start":{"row":153,"column":41},"end":{"row":153,"column":42},"action":"insert","lines":["n"]},{"start":{"row":153,"column":42},"end":{"row":153,"column":43},"action":"insert","lines":["d"]}],[{"start":{"row":153,"column":43},"end":{"row":153,"column":44},"action":"insert","lines":[" "],"id":28}],[{"start":{"row":153,"column":43},"end":{"row":153,"column":44},"action":"remove","lines":[" "],"id":29}],[{"start":{"row":153,"column":54},"end":{"row":153,"column":55},"action":"insert","lines":[" "],"id":30},{"start":{"row":153,"column":55},"end":{"row":153,"column":56},"action":"insert","lines":["/"]},{"start":{"row":153,"column":56},"end":{"row":153,"column":57},"action":"insert","lines":["/"]}],[{"start":{"row":153,"column":57},"end":{"row":153,"column":58},"action":"insert","lines":[" "],"id":31}],[{"start":{"row":153,"column":57},"end":{"row":153,"column":58},"action":"remove","lines":[" "],"id":32},{"start":{"row":153,"column":56},"end":{"row":153,"column":57},"action":"remove","lines":["/"]},{"start":{"row":153,"column":55},"end":{"row":153,"column":56},"action":"remove","lines":["/"]}],[{"start":{"row":153,"column":20},"end":{"row":154,"column":0},"action":"insert","lines":["",""],"id":33},{"start":{"row":154,"column":0},"end":{"row":154,"column":20},"action":"insert","lines":["                    "]}],[{"start":{"row":153,"column":20},"end":{"row":153,"column":21},"action":"insert","lines":["/"],"id":34},{"start":{"row":153,"column":21},"end":{"row":153,"column":22},"action":"insert","lines":["/"]},{"start":{"row":153,"column":22},"end":{"row":153,"column":23},"action":"insert","lines":["s"]},{"start":{"row":153,"column":23},"end":{"row":153,"column":24},"action":"insert","lines":["t"]}],[{"start":{"row":153,"column":24},"end":{"row":153,"column":25},"action":"insert","lines":["a"],"id":35},{"start":{"row":153,"column":25},"end":{"row":153,"column":26},"action":"insert","lines":["r"]},{"start":{"row":153,"column":26},"end":{"row":153,"column":27},"action":"insert","lines":["t"]}],[{"start":{"row":153,"column":27},"end":{"row":153,"column":28},"action":"insert","lines":[" "],"id":36},{"start":{"row":153,"column":28},"end":{"row":153,"column":29},"action":"insert","lines":["a"]},{"start":{"row":153,"column":29},"end":{"row":153,"column":30},"action":"insert","lines":["d"]},{"start":{"row":153,"column":30},"end":{"row":153,"column":31},"action":"insert","lines":["d"]},{"start":{"row":153,"column":31},"end":{"row":153,"column":32},"action":"insert","lines":["i"]},{"start":{"row":153,"column":32},"end":{"row":153,"column":33},"action":"insert","lines":["n"]},{"start":{"row":153,"column":33},"end":{"row":153,"column":34},"action":"insert","lines":["g"]}],[{"start":{"row":153,"column":34},"end":{"row":153,"column":35},"action":"insert","lines":[" "],"id":37}],[{"start":{"row":153,"column":34},"end":{"row":153,"column":35},"action":"remove","lines":[" "],"id":38},{"start":{"row":153,"column":33},"end":{"row":153,"column":34},"action":"remove","lines":["g"]},{"start":{"row":153,"column":32},"end":{"row":153,"column":33},"action":"remove","lines":["n"]},{"start":{"row":153,"column":31},"end":{"row":153,"column":32},"action":"remove","lines":["i"]},{"start":{"row":153,"column":30},"end":{"row":153,"column":31},"action":"remove","lines":["d"]},{"start":{"row":153,"column":29},"end":{"row":153,"column":30},"action":"remove","lines":["d"]},{"start":{"row":153,"column":28},"end":{"row":153,"column":29},"action":"remove","lines":["a"]}],[{"start":{"row":153,"column":28},"end":{"row":153,"column":29},"action":"insert","lines":["a"],"id":39},{"start":{"row":153,"column":29},"end":{"row":153,"column":30},"action":"insert","lines":["d"]},{"start":{"row":153,"column":30},"end":{"row":153,"column":31},"action":"insert","lines":["d"]},{"start":{"row":153,"column":31},"end":{"row":153,"column":32},"action":"insert","lines":["i"]}],[{"start":{"row":153,"column":32},"end":{"row":153,"column":33},"action":"insert","lines":["n"],"id":40},{"start":{"row":153,"column":33},"end":{"row":153,"column":34},"action":"insert","lines":["g"]}],[{"start":{"row":153,"column":34},"end":{"row":153,"column":35},"action":"insert","lines":[" "],"id":41}],[{"start":{"row":153,"column":34},"end":{"row":153,"column":35},"action":"remove","lines":[" "],"id":42},{"start":{"row":153,"column":33},"end":{"row":153,"column":34},"action":"remove","lines":["g"]}],[{"start":{"row":153,"column":33},"end":{"row":153,"column":34},"action":"insert","lines":["g"],"id":43}],[{"start":{"row":153,"column":34},"end":{"row":153,"column":35},"action":"insert","lines":[" "],"id":44},{"start":{"row":153,"column":35},"end":{"row":153,"column":36},"action":"insert","lines":["o"]},{"start":{"row":153,"column":36},"end":{"row":153,"column":37},"action":"insert","lines":["n"]},{"start":{"row":153,"column":37},"end":{"row":153,"column":38},"action":"insert","lines":["t"]}],[{"start":{"row":153,"column":38},"end":{"row":153,"column":39},"action":"insert","lines":[" "],"id":45},{"start":{"row":153,"column":39},"end":{"row":153,"column":40},"action":"insert","lines":["o"]},{"start":{"row":153,"column":40},"end":{"row":153,"column":41},"action":"insert","lines":["f"]},{"start":{"row":153,"column":41},"end":{"row":153,"column":42},"action":"insert","lines":["o"]},{"start":{"row":153,"column":42},"end":{"row":153,"column":43},"action":"insert","lines":["u"]}],[{"start":{"row":153,"column":42},"end":{"row":153,"column":43},"action":"remove","lines":["u"],"id":46},{"start":{"row":153,"column":41},"end":{"row":153,"column":42},"action":"remove","lines":["o"]},{"start":{"row":153,"column":40},"end":{"row":153,"column":41},"action":"remove","lines":["f"]},{"start":{"row":153,"column":39},"end":{"row":153,"column":40},"action":"remove","lines":["o"]},{"start":{"row":153,"column":38},"end":{"row":153,"column":39},"action":"remove","lines":[" "]}],[{"start":{"row":153,"column":38},"end":{"row":153,"column":39},"action":"insert","lines":["t"],"id":47}],[{"start":{"row":153,"column":38},"end":{"row":153,"column":39},"action":"remove","lines":["t"],"id":48}],[{"start":{"row":153,"column":38},"end":{"row":153,"column":39},"action":"insert","lines":["o"],"id":49}],[{"start":{"row":153,"column":39},"end":{"row":153,"column":40},"action":"insert","lines":[" "],"id":50},{"start":{"row":153,"column":40},"end":{"row":153,"column":41},"action":"insert","lines":["f"]},{"start":{"row":153,"column":41},"end":{"row":153,"column":42},"action":"insert","lines":["o"]},{"start":{"row":153,"column":42},"end":{"row":153,"column":43},"action":"insert","lines":["u"]},{"start":{"row":153,"column":43},"end":{"row":153,"column":44},"action":"insert","lines":["n"]},{"start":{"row":153,"column":44},"end":{"row":153,"column":45},"action":"insert","lines":["d"]}],[{"start":{"row":153,"column":45},"end":{"row":153,"column":46},"action":"insert","lines":[" "],"id":51}],[{"start":{"row":153,"column":45},"end":{"row":153,"column":46},"action":"remove","lines":[" "],"id":52}],[{"start":{"row":153,"column":45},"end":{"row":153,"column":46},"action":"insert","lines":["."],"id":53},{"start":{"row":153,"column":46},"end":{"row":153,"column":47},"action":"insert","lines":["t"]},{"start":{"row":153,"column":47},"end":{"row":153,"column":48},"action":"insert","lines":["x"]},{"start":{"row":153,"column":48},"end":{"row":153,"column":49},"action":"insert","lines":["t"]}],[{"start":{"row":153,"column":20},"end":{"row":153,"column":49},"action":"remove","lines":["//start adding onto found.txt"],"id":54}],[{"start":{"row":154,"column":55},"end":{"row":154,"column":84},"action":"insert","lines":["//start adding onto found.txt"],"id":55}],[{"start":{"row":153,"column":16},"end":{"row":153,"column":20},"action":"remove","lines":["    "],"id":56},{"start":{"row":153,"column":12},"end":{"row":153,"column":16},"action":"remove","lines":["    "]},{"start":{"row":153,"column":8},"end":{"row":153,"column":12},"action":"remove","lines":["    "]},{"start":{"row":153,"column":4},"end":{"row":153,"column":8},"action":"remove","lines":["    "]},{"start":{"row":153,"column":0},"end":{"row":153,"column":4},"action":"remove","lines":["    "]},{"start":{"row":152,"column":17},"end":{"row":153,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":137,"column":38},"end":{"row":137,"column":39},"action":"insert","lines":[" "],"id":57}],[{"start":{"row":137,"column":23},"end":{"row":137,"column":24},"action":"insert","lines":[" "],"id":58}],[{"start":{"row":31,"column":9},"end":{"row":31,"column":10},"action":"remove","lines":["y"],"id":59},{"start":{"row":31,"column":8},"end":{"row":31,"column":9},"action":"remove","lines":["e"]},{"start":{"row":31,"column":7},"end":{"row":31,"column":8},"action":"remove","lines":["k"]}],[{"start":{"row":31,"column":7},"end":{"row":31,"column":8},"action":"insert","lines":["i"],"id":60},{"start":{"row":31,"column":8},"end":{"row":31,"column":9},"action":"insert","lines":["n"]},{"start":{"row":31,"column":9},"end":{"row":31,"column":10},"action":"insert","lines":["p"]},{"start":{"row":31,"column":10},"end":{"row":31,"column":11},"action":"insert","lines":["u"]},{"start":{"row":31,"column":11},"end":{"row":31,"column":12},"action":"insert","lines":["i"]},{"start":{"row":31,"column":12},"end":{"row":31,"column":13},"action":"insert","lines":["t"]}],[{"start":{"row":31,"column":12},"end":{"row":31,"column":13},"action":"remove","lines":["t"],"id":61},{"start":{"row":31,"column":11},"end":{"row":31,"column":12},"action":"remove","lines":["i"]}],[{"start":{"row":31,"column":11},"end":{"row":31,"column":12},"action":"insert","lines":["y"],"id":62}],[{"start":{"row":31,"column":11},"end":{"row":31,"column":12},"action":"remove","lines":["y"],"id":63}],[{"start":{"row":31,"column":11},"end":{"row":31,"column":12},"action":"insert","lines":["t"],"id":64}],[{"start":{"row":31,"column":7},"end":{"row":31,"column":12},"action":"remove","lines":["input"],"id":65},{"start":{"row":31,"column":7},"end":{"row":31,"column":10},"action":"insert","lines":["key"]},{"start":{"row":48,"column":4},"end":{"row":48,"column":9},"action":"remove","lines":["input"]},{"start":{"row":48,"column":4},"end":{"row":48,"column":7},"action":"insert","lines":["key"]},{"start":{"row":72,"column":53},"end":{"row":72,"column":58},"action":"remove","lines":["input"]},{"start":{"row":72,"column":53},"end":{"row":72,"column":56},"action":"insert","lines":["key"]},{"start":{"row":140,"column":47},"end":{"row":140,"column":52},"action":"remove","lines":["input"]},{"start":{"row":140,"column":47},"end":{"row":140,"column":50},"action":"insert","lines":["key"]},{"start":{"row":146,"column":44},"end":{"row":146,"column":49},"action":"remove","lines":["input"]},{"start":{"row":146,"column":44},"end":{"row":146,"column":47},"action":"insert","lines":["key"]},{"start":{"row":148,"column":35},"end":{"row":148,"column":40},"action":"remove","lines":["input"]},{"start":{"row":148,"column":35},"end":{"row":148,"column":38},"action":"insert","lines":["key"]},{"start":{"row":151,"column":34},"end":{"row":151,"column":39},"action":"remove","lines":["input"]},{"start":{"row":151,"column":34},"end":{"row":151,"column":37},"action":"insert","lines":["key"]},{"start":{"row":160,"column":35},"end":{"row":160,"column":40},"action":"remove","lines":["input"]},{"start":{"row":160,"column":35},"end":{"row":160,"column":38},"action":"insert","lines":["key"]},{"start":{"row":161,"column":30},"end":{"row":161,"column":35},"action":"remove","lines":["input"]},{"start":{"row":161,"column":30},"end":{"row":161,"column":33},"action":"insert","lines":["key"]},{"start":{"row":167,"column":26},"end":{"row":167,"column":31},"action":"remove","lines":["input"]},{"start":{"row":167,"column":26},"end":{"row":167,"column":29},"action":"insert","lines":["key"]}]]},"ace":{"folds":[],"scrolltop":360,"scrollleft":0,"selection":{"start":{"row":2,"column":16},"end":{"row":2,"column":16},"isBackwards":true},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":50,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1554588657697,"hash":"aeaf1786c0b98cc0e466de1459d827aab7972b35"}