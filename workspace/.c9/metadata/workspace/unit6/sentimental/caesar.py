{"filter":false,"title":"caesar.py","tooltip":"~/workspace/unit6/sentimental/caesar.py","ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":17,"column":21},"end":{"row":17,"column":21},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"hash":"19261c6c7df331ba9664f96b8f639ec13bd74e65","undoManager":{"mark":68,"position":68,"stack":[[{"start":{"row":0,"column":0},"end":{"row":26,"column":4},"action":"remove","lines":["import cs50","import sys","","def main():","    if len(sys.argv) != 2:","        quit()","","    secret_key = int(sys.argv[1])","    translated = []","    secret_message = cs50.get_string()","    for symbol in secret_message:","        if symbol.isalpha():","            translated.append(caesar(symbol, secret_key))","        else:                               ","            translated.append(symbol)","","    print(\"\".join(translated))","    exit(0)","","def caesar(secret_key, char):","    if char.isupper():","        return chr(((ord(char) - 65 + secret_key) % 26) + 65)","    else:","        return chr(((ord(char) - 97 + secret_key) % 26) + 97)","if __name__ == \"__main__\":","    main()","    "],"id":2},{"start":{"row":0,"column":0},"end":{"row":30,"column":10},"action":"insert","lines":["from sys import argv","","def main():","    if len(argv) != 2:","        return 1","    try:","        i = int(argv[1])","        print(argv[1], \"is not a number\")","        return 1","","    i = i % 26","    plaintext = input(\"plaintext:  \")","    ciphertext = \"\"","    for j in plaintext:","        ascii_index = ord(j)","        if ascii_index >= 65 and ascii_index <= 90:","            beginning = 65","        elif ascii_index >= 97 and ascii_index <= 122:","            beginning = 97","        else:","            k = j","            ciphertext += k","            continue","        alphaIndex = ascii_index - beginning","        k = chr((alphaIndex + i) % 26 + beginning)","        ciphertext += k","","    print(f\"ciphertext: {ciphertext}\")","    return 0","if __name__ == \"__main__\":","    main()"]}],[{"start":{"row":7,"column":0},"end":{"row":7,"column":41},"action":"remove","lines":["        print(argv[1], \"is not a number\")"],"id":3},{"start":{"row":6,"column":24},"end":{"row":7,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":9,"column":3},"end":{"row":9,"column":4},"action":"insert","lines":[" "],"id":4}],[{"start":{"row":9,"column":4},"end":{"row":9,"column":8},"action":"insert","lines":["    "],"id":5}],[{"start":{"row":9,"column":8},"end":{"row":9,"column":9},"action":"remove","lines":[" "],"id":6}],[{"start":{"row":9,"column":4},"end":{"row":9,"column":8},"action":"remove","lines":["    "],"id":7}],[{"start":{"row":8,"column":0},"end":{"row":8,"column":1},"action":"insert","lines":["\\"],"id":8}],[{"start":{"row":8,"column":0},"end":{"row":8,"column":1},"action":"remove","lines":["\\"],"id":9},{"start":{"row":7,"column":16},"end":{"row":8,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":0,"column":0},"end":{"row":28,"column":10},"action":"remove","lines":["from sys import argv","","def main():","    if len(argv) != 2:","        return 1","    try:","        i = int(argv[1])","        return 1","    i = i % 26","    plaintext = input(\"plaintext:  \")","    ciphertext = \"\"","    for j in plaintext:","        ascii_index = ord(j)","        if ascii_index >= 65 and ascii_index <= 90:","            beginning = 65","        elif ascii_index >= 97 and ascii_index <= 122:","            beginning = 97","        else:","            k = j","            ciphertext += k","            continue","        alphaIndex = ascii_index - beginning","        k = chr((alphaIndex + i) % 26 + beginning)","        ciphertext += k","","    print(f\"ciphertext: {ciphertext}\")","    return 0","if __name__ == \"__main__\":","    main()"],"id":10}],[{"start":{"row":0,"column":0},"end":{"row":29,"column":0},"action":"insert","lines":["import sys","import cs50","","def main():","","    if len(sys.argv) != 2:","        sys.exit(1)","","    if int(sys.argv[1]) < 26:","        key = int(sys.argv[1])","    else:","        key = int(sys.argv[1]) % 26","","    print(\"Plaintext:\")","    plaintext = input()","","    for char in plaintext:","        if char.isalpha() and char.isupper():","            j = ((ord(char) - 65 + key) % 26) + 65","            print(chr(j), end=\"\")","        elif char.isalpha() and char.islower():","            j = ((ord(char) - 97 + key) % 26) + 97","            print(chr(j), end=\"\")","        else:","            print(char, end=\"\")","","    print('ciphertext: ' + plaintext)","if __name__ == \"__main__\":","    main()",""],"id":11}],[{"start":{"row":26,"column":0},"end":{"row":26,"column":37},"action":"remove","lines":["    print('ciphertext: ' + plaintext)"],"id":25}],[{"start":{"row":14,"column":23},"end":{"row":15,"column":0},"action":"insert","lines":["",""],"id":26},{"start":{"row":15,"column":0},"end":{"row":15,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":15,"column":4},"end":{"row":15,"column":23},"action":"insert","lines":["print(\"Plaintext:\")"],"id":27}],[{"start":{"row":15,"column":11},"end":{"row":15,"column":20},"action":"remove","lines":["Plaintext"],"id":28},{"start":{"row":15,"column":11},"end":{"row":15,"column":12},"action":"insert","lines":["c"]},{"start":{"row":15,"column":12},"end":{"row":15,"column":13},"action":"insert","lines":["i"]},{"start":{"row":15,"column":13},"end":{"row":15,"column":14},"action":"insert","lines":["p"]},{"start":{"row":15,"column":14},"end":{"row":15,"column":15},"action":"insert","lines":["h"]},{"start":{"row":15,"column":15},"end":{"row":15,"column":16},"action":"insert","lines":["e"]},{"start":{"row":15,"column":16},"end":{"row":15,"column":17},"action":"insert","lines":["r"]},{"start":{"row":15,"column":17},"end":{"row":15,"column":18},"action":"insert","lines":["t"]},{"start":{"row":15,"column":18},"end":{"row":15,"column":19},"action":"insert","lines":["e"]},{"start":{"row":15,"column":19},"end":{"row":15,"column":20},"action":"insert","lines":["x"]}],[{"start":{"row":15,"column":20},"end":{"row":15,"column":21},"action":"insert","lines":["t"],"id":29}],[{"start":{"row":15,"column":22},"end":{"row":15,"column":23},"action":"insert","lines":[" "],"id":30}],[{"start":{"row":15,"column":4},"end":{"row":15,"column":25},"action":"remove","lines":["print(\"ciphertext: \")"],"id":31},{"start":{"row":15,"column":4},"end":{"row":15,"column":33},"action":"insert","lines":["print(\"ciphertext: \", end=\"\")"]}],[{"start":{"row":15,"column":26},"end":{"row":15,"column":29},"action":"remove","lines":["end"],"id":32},{"start":{"row":15,"column":26},"end":{"row":15,"column":27},"action":"insert","lines":["c"]},{"start":{"row":15,"column":27},"end":{"row":15,"column":28},"action":"insert","lines":["o"]},{"start":{"row":15,"column":28},"end":{"row":15,"column":29},"action":"insert","lines":["d"]},{"start":{"row":15,"column":29},"end":{"row":15,"column":30},"action":"insert","lines":["e"]}],[{"start":{"row":20,"column":28},"end":{"row":20,"column":29},"action":"remove","lines":["d"],"id":33},{"start":{"row":20,"column":27},"end":{"row":20,"column":28},"action":"remove","lines":["n"]},{"start":{"row":20,"column":26},"end":{"row":20,"column":27},"action":"remove","lines":["e"]}],[{"start":{"row":20,"column":26},"end":{"row":20,"column":27},"action":"insert","lines":["c"],"id":34},{"start":{"row":20,"column":27},"end":{"row":20,"column":28},"action":"insert","lines":["o"]},{"start":{"row":20,"column":28},"end":{"row":20,"column":29},"action":"insert","lines":["d"]},{"start":{"row":20,"column":29},"end":{"row":20,"column":30},"action":"insert","lines":["e"]}],[{"start":{"row":23,"column":28},"end":{"row":23,"column":29},"action":"remove","lines":["d"],"id":35},{"start":{"row":23,"column":27},"end":{"row":23,"column":28},"action":"remove","lines":["n"]},{"start":{"row":23,"column":26},"end":{"row":23,"column":27},"action":"remove","lines":["e"]}],[{"start":{"row":23,"column":26},"end":{"row":23,"column":27},"action":"insert","lines":["c"],"id":36},{"start":{"row":23,"column":27},"end":{"row":23,"column":28},"action":"insert","lines":["o"]},{"start":{"row":23,"column":28},"end":{"row":23,"column":29},"action":"insert","lines":["d"]},{"start":{"row":23,"column":29},"end":{"row":23,"column":30},"action":"insert","lines":["e"]}],[{"start":{"row":25,"column":26},"end":{"row":25,"column":27},"action":"remove","lines":["d"],"id":37},{"start":{"row":25,"column":25},"end":{"row":25,"column":26},"action":"remove","lines":["n"]},{"start":{"row":25,"column":24},"end":{"row":25,"column":25},"action":"remove","lines":["e"]}],[{"start":{"row":25,"column":24},"end":{"row":25,"column":25},"action":"insert","lines":["c"],"id":38},{"start":{"row":25,"column":25},"end":{"row":25,"column":26},"action":"insert","lines":["o"]},{"start":{"row":25,"column":26},"end":{"row":25,"column":27},"action":"insert","lines":["d"]},{"start":{"row":25,"column":27},"end":{"row":25,"column":28},"action":"insert","lines":["e"]}],[{"start":{"row":25,"column":32},"end":{"row":26,"column":0},"action":"insert","lines":["",""],"id":39},{"start":{"row":26,"column":0},"end":{"row":26,"column":12},"action":"insert","lines":["            "]},{"start":{"row":26,"column":12},"end":{"row":27,"column":0},"action":"insert","lines":["",""]},{"start":{"row":27,"column":0},"end":{"row":27,"column":12},"action":"insert","lines":["            "]}],[{"start":{"row":27,"column":8},"end":{"row":27,"column":12},"action":"remove","lines":["    "],"id":40},{"start":{"row":27,"column":4},"end":{"row":27,"column":8},"action":"remove","lines":["    "]}],[{"start":{"row":27,"column":4},"end":{"row":28,"column":0},"action":"insert","lines":["",""],"id":41},{"start":{"row":28,"column":0},"end":{"row":28,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":28,"column":4},"end":{"row":28,"column":12},"action":"insert","lines":[" print()"],"id":42}],[{"start":{"row":29,"column":0},"end":{"row":30,"column":0},"action":"remove","lines":["",""],"id":43},{"start":{"row":28,"column":12},"end":{"row":29,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":28,"column":12},"end":{"row":29,"column":0},"action":"insert","lines":["",""],"id":44},{"start":{"row":29,"column":0},"end":{"row":29,"column":5},"action":"insert","lines":["     "]}],[{"start":{"row":28,"column":5},"end":{"row":28,"column":8},"action":"insert","lines":["   "],"id":45}],[{"start":{"row":28,"column":0},"end":{"row":29,"column":5},"action":"remove","lines":["        print()","     "],"id":46},{"start":{"row":27,"column":4},"end":{"row":28,"column":0},"action":"remove","lines":["",""]},{"start":{"row":27,"column":0},"end":{"row":27,"column":4},"action":"remove","lines":["    "]},{"start":{"row":26,"column":12},"end":{"row":27,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":26,"column":0},"end":{"row":26,"column":12},"action":"remove","lines":["            "],"id":47}],[{"start":{"row":15,"column":26},"end":{"row":15,"column":30},"action":"remove","lines":["code"],"id":48},{"start":{"row":15,"column":26},"end":{"row":15,"column":27},"action":"insert","lines":["e"]},{"start":{"row":15,"column":27},"end":{"row":15,"column":28},"action":"insert","lines":["n"]},{"start":{"row":15,"column":28},"end":{"row":15,"column":29},"action":"insert","lines":["d"]}],[{"start":{"row":20,"column":26},"end":{"row":20,"column":30},"action":"remove","lines":["code"],"id":49},{"start":{"row":20,"column":26},"end":{"row":20,"column":27},"action":"insert","lines":["e"]},{"start":{"row":20,"column":27},"end":{"row":20,"column":28},"action":"insert","lines":["n"]},{"start":{"row":20,"column":28},"end":{"row":20,"column":29},"action":"insert","lines":["b"]}],[{"start":{"row":20,"column":28},"end":{"row":20,"column":29},"action":"remove","lines":["b"],"id":50}],[{"start":{"row":20,"column":28},"end":{"row":20,"column":29},"action":"insert","lines":["d"],"id":51}],[{"start":{"row":23,"column":26},"end":{"row":23,"column":30},"action":"remove","lines":["code"],"id":52},{"start":{"row":23,"column":26},"end":{"row":23,"column":27},"action":"insert","lines":["e"]},{"start":{"row":23,"column":27},"end":{"row":23,"column":28},"action":"insert","lines":["n"]},{"start":{"row":23,"column":28},"end":{"row":23,"column":29},"action":"insert","lines":["d"]},{"start":{"row":23,"column":29},"end":{"row":23,"column":30},"action":"insert","lines":["f"]}],[{"start":{"row":23,"column":29},"end":{"row":23,"column":30},"action":"remove","lines":["f"],"id":53}],[{"start":{"row":25,"column":24},"end":{"row":25,"column":28},"action":"remove","lines":["code"],"id":54},{"start":{"row":25,"column":24},"end":{"row":25,"column":25},"action":"insert","lines":["e"]},{"start":{"row":25,"column":25},"end":{"row":25,"column":26},"action":"insert","lines":["n"]},{"start":{"row":25,"column":26},"end":{"row":25,"column":27},"action":"insert","lines":["d"]}],[{"start":{"row":15,"column":33},"end":{"row":15,"column":34},"action":"insert","lines":["b"],"id":55}],[{"start":{"row":15,"column":33},"end":{"row":15,"column":34},"action":"remove","lines":["b"],"id":56}],[{"start":{"row":15,"column":33},"end":{"row":15,"column":34},"action":"insert","lines":[" "],"id":57}],[{"start":{"row":15,"column":34},"end":{"row":15,"column":67},"action":"insert","lines":["# ends the output with a <space> "],"id":58}],[{"start":{"row":15,"column":39},"end":{"row":15,"column":40},"action":"remove","lines":["s"],"id":59}],[{"start":{"row":15,"column":39},"end":{"row":15,"column":40},"action":"insert","lines":[" "],"id":60},{"start":{"row":15,"column":40},"end":{"row":15,"column":41},"action":"insert","lines":["p"]},{"start":{"row":15,"column":41},"end":{"row":15,"column":42},"action":"insert","lines":["a"]},{"start":{"row":15,"column":42},"end":{"row":15,"column":43},"action":"insert","lines":["r"]},{"start":{"row":15,"column":43},"end":{"row":15,"column":44},"action":"insert","lines":["a"]},{"start":{"row":15,"column":44},"end":{"row":15,"column":45},"action":"insert","lines":["p"]},{"start":{"row":15,"column":45},"end":{"row":15,"column":46},"action":"insert","lines":["e"]},{"start":{"row":15,"column":46},"end":{"row":15,"column":47},"action":"insert","lines":["t"]}],[{"start":{"row":15,"column":46},"end":{"row":15,"column":47},"action":"remove","lines":["t"],"id":61},{"start":{"row":15,"column":45},"end":{"row":15,"column":46},"action":"remove","lines":["e"]},{"start":{"row":15,"column":44},"end":{"row":15,"column":45},"action":"remove","lines":["p"]}],[{"start":{"row":15,"column":44},"end":{"row":15,"column":45},"action":"insert","lines":["m"],"id":62},{"start":{"row":15,"column":45},"end":{"row":15,"column":46},"action":"insert","lines":["e"]},{"start":{"row":15,"column":46},"end":{"row":15,"column":47},"action":"insert","lines":["t"]},{"start":{"row":15,"column":47},"end":{"row":15,"column":48},"action":"insert","lines":["e"]},{"start":{"row":15,"column":48},"end":{"row":15,"column":49},"action":"insert","lines":["r"]}],[{"start":{"row":15,"column":49},"end":{"row":15,"column":50},"action":"insert","lines":[" "],"id":63},{"start":{"row":15,"column":50},"end":{"row":15,"column":51},"action":"insert","lines":["e"]},{"start":{"row":15,"column":51},"end":{"row":15,"column":52},"action":"insert","lines":["n"]},{"start":{"row":15,"column":52},"end":{"row":15,"column":53},"action":"insert","lines":["d"]},{"start":{"row":15,"column":53},"end":{"row":15,"column":54},"action":"insert","lines":["s"]}],[{"start":{"row":15,"column":54},"end":{"row":15,"column":55},"action":"insert","lines":[" "],"id":64},{"start":{"row":15,"column":55},"end":{"row":15,"column":56},"action":"insert","lines":["t"]}],[{"start":{"row":15,"column":55},"end":{"row":15,"column":56},"action":"remove","lines":["t"],"id":65},{"start":{"row":15,"column":54},"end":{"row":15,"column":55},"action":"remove","lines":[" "]}],[{"start":{"row":15,"column":80},"end":{"row":15,"column":81},"action":"remove","lines":[" "],"id":66}],[{"start":{"row":26,"column":0},"end":{"row":26,"column":1},"action":"insert","lines":["p"],"id":67},{"start":{"row":26,"column":1},"end":{"row":26,"column":2},"action":"insert","lines":["t"]},{"start":{"row":26,"column":2},"end":{"row":26,"column":3},"action":"insert","lines":["i"]},{"start":{"row":26,"column":3},"end":{"row":26,"column":4},"action":"insert","lines":["n"]},{"start":{"row":26,"column":4},"end":{"row":26,"column":5},"action":"insert","lines":["y"]}],[{"start":{"row":26,"column":5},"end":{"row":26,"column":6},"action":"insert","lines":[" "],"id":68}],[{"start":{"row":26,"column":5},"end":{"row":26,"column":6},"action":"remove","lines":[" "],"id":69},{"start":{"row":26,"column":4},"end":{"row":26,"column":5},"action":"remove","lines":["y"]},{"start":{"row":26,"column":3},"end":{"row":26,"column":4},"action":"remove","lines":["n"]},{"start":{"row":26,"column":2},"end":{"row":26,"column":3},"action":"remove","lines":["i"]},{"start":{"row":26,"column":1},"end":{"row":26,"column":2},"action":"remove","lines":["t"]}],[{"start":{"row":26,"column":1},"end":{"row":26,"column":2},"action":"insert","lines":["r"],"id":70},{"start":{"row":26,"column":2},"end":{"row":26,"column":3},"action":"insert","lines":["i"]},{"start":{"row":26,"column":3},"end":{"row":26,"column":4},"action":"insert","lines":["n"]},{"start":{"row":26,"column":4},"end":{"row":26,"column":5},"action":"insert","lines":["t"]}],[{"start":{"row":26,"column":5},"end":{"row":26,"column":7},"action":"insert","lines":["()"],"id":71}],[{"start":{"row":26,"column":6},"end":{"row":26,"column":7},"action":"insert","lines":["\\"],"id":72},{"start":{"row":26,"column":7},"end":{"row":26,"column":8},"action":"insert","lines":["n"]}],[{"start":{"row":26,"column":0},"end":{"row":26,"column":9},"action":"remove","lines":["print(\\n)"],"id":73},{"start":{"row":26,"column":0},"end":{"row":26,"column":1},"action":"insert","lines":["="]}],[{"start":{"row":26,"column":0},"end":{"row":26,"column":1},"action":"remove","lines":["="],"id":74}],[{"start":{"row":13,"column":21},"end":{"row":13,"column":22},"action":"insert","lines":[" "],"id":75}],[{"start":{"row":25,"column":31},"end":{"row":25,"column":45},"action":"insert","lines":["minor overbite"],"id":76}],[{"start":{"row":25,"column":31},"end":{"row":25,"column":45},"action":"remove","lines":["minor overbite"],"id":77}],[{"start":{"row":25,"column":31},"end":{"row":26,"column":0},"action":"insert","lines":["",""],"id":78},{"start":{"row":26,"column":0},"end":{"row":26,"column":12},"action":"insert","lines":["            "]}],[{"start":{"row":26,"column":8},"end":{"row":26,"column":12},"action":"remove","lines":["    "],"id":79},{"start":{"row":26,"column":4},"end":{"row":26,"column":8},"action":"remove","lines":["    "]}],[{"start":{"row":26,"column":4},"end":{"row":26,"column":5},"action":"insert","lines":["p"],"id":80},{"start":{"row":26,"column":5},"end":{"row":26,"column":6},"action":"insert","lines":["r"]},{"start":{"row":26,"column":6},"end":{"row":26,"column":7},"action":"insert","lines":["i"]},{"start":{"row":26,"column":7},"end":{"row":26,"column":8},"action":"insert","lines":["n"]},{"start":{"row":26,"column":8},"end":{"row":26,"column":9},"action":"insert","lines":["t"]}],[{"start":{"row":26,"column":9},"end":{"row":26,"column":11},"action":"insert","lines":["()"],"id":81}],[{"start":{"row":26,"column":10},"end":{"row":26,"column":12},"action":"insert","lines":["\"\""],"id":82}],[{"start":{"row":26,"column":11},"end":{"row":26,"column":12},"action":"insert","lines":["\\"],"id":83},{"start":{"row":26,"column":12},"end":{"row":26,"column":13},"action":"insert","lines":["n"]}]]},"timestamp":1556663647265}