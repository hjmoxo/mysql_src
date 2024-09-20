def main():
    character = {
        "name" : "볼프강 슈나이더",
        "level" : 60,
        "items" : { 
            "sword" : "검은 책", 
            "armor" : "솔로몬 세트"
        },
        "skill" : [ "망령의 활", "이빨의 장", "솔로몬의 판결" ]
    } 

    for key, value in character.items():
        if isinstance(character[key], dict):
            for key in value:  
                print(f"{key}: {value[key]}")
        elif isinstance(character[key], list):
            for ele in value:
                print(f"{key}: {ele}")
        else:
            print(f"{key}: {value}")


if __name__ == "__main__":
    main()