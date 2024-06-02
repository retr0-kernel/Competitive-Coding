# Find Cabs Nearby

## Approach Used:

1. Obtain latitude and longitude of each cab in `string` format along with their `user-id` and `name` from the JSON encoded input file.

2. Convert latitude and longitude of the cab present in string format to `double`.

3. Convert latitude and longitude of both, the user and the cab present in degrees to `radians`.

4. Calculate distance between the user’s location and the cab using `Great Circle Distance` formula.

5. If distance is found to be less than or equal to 50 kms then output the user-id and name of the cab driver to a new file else take no action.