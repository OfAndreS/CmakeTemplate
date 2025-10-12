# Adicionar o executável de teste
add_executable(runTests test_ProcessingService.cpp)

# Ligar os testes à biblioteca "core" para que possamos aceder ao seu código
target_link_libraries(runTests PRIVATE core)

# Adicionar o teste ao CTest
add_test(NAME ProcessingServiceTests COMMAND runTests)