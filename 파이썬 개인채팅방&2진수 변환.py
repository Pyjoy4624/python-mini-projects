def Chat():
    # MCAT = [] # 이 변수는 사용되지 않고 바로 덮어쓰여지므로 제거합니다.
    # CB = [] # CB는 각 메시지마다 새로 생성하여 사용합니다.
    C = {}
    CM = 0
    M = 0
    Nick = input("닉네임을 임력 : ")
    print(Nick,"님, 제 한줄노트 프로그램에 오신 걸 환영합니다~")
    print()

    while True:
        input_message = input("txt를 입력(나가려면 'exit를 임력) : ") # 'MCAT' 대신 더 명확한 변수 이름을 사용합니다.
        C[CM] = input_message

        # 제너레이터 객체 대신 실제 2진수 문자열 리스트를 생성합니다.
        binary_parts = [format(ord(char), '08b') for char in input_message]
        # 생성된 2진수 문자열 리스트를 공백으로 연결합니다.
        joined_binary_string = ' '.join(binary_parts)

        M += (len(input_message)+len(joined_binary_string))
        if input_message.lower() == 'exit':
            break
        print(f"{Nick} {M}₩/$ : {C[CM]}")
        print(f"-> 2진수 = {joined_binary_string}") # 올바르게 연결된 2진수 문자열을 출력합니다.
        CM += 1

Chat()