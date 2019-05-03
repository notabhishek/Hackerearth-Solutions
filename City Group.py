//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

class Town:
	def __init__(self,num_of_cities, num_of_city_groups, city_group_list):
		self.num_of_cities = num_of_cities
		self.num_of_city_groups = num_of_city_groups
		self.city_group_list = city_group_list
		self.distances = []

	def find_distance_between_cities(self,cities_list):
		city_group_1 = self.city_group_list[cities_list[0]]
		city_group_2 = self.city_group_list[cities_list[1]]
		if city_group_1 == city_group_2:
			return 0
		else:
			on_going_distance = abs(city_group_2 -  city_group_1)
			reverse_distance = self.num_of_city_groups - on_going_distance
			return reverse_distance if on_going_distance > reverse_distance else on_going_distance



def process_input():
	import sys
	cities_and_city_group_list = [int(x) for x in sys.stdin.readline().split()]
	num_of_cities = cities_and_city_group_list[0]
	num_of_city_groups = cities_and_city_group_list[1]
	city_group_list = [None]*(num_of_cities+1)
	for i in range(num_of_city_groups):
		buffer_list = [int(x) for x in sys.stdin.readline().split()]
		num_of_cities_in_buffered_list = buffer_list[0]
		for j in range(1, num_of_cities_in_buffered_list+1):
			city_group_list[buffer_list[j]] = i+1
	town = Town(num_of_cities, num_of_city_groups, city_group_list)
	num_of_test_cases = [int(x) for x in sys.stdin.readline().split()][0]
	for i in range(num_of_test_cases):
		town.distances.append(town.find_distance_between_cities([int(x) for x in sys.stdin.readline().split()]))
	return town

def print_output(town):
	print ('\n'.join(map(str,town.distances)))

def main():
	town = process_input()
	print_output(town)
if __name__ == '__main__':
	main()
