import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class package_problem {

	private int index;
	private double weight;
	private double cost;
	package_problem(int index,double weight,double cost){
		this.index=index;
		this.weight=weight;
		this.cost=cost;
	}
	private int getindex(){
		return this.index;
	}
	private double getweight(){
		return this.weight;
	}
	private double getcost(){
		return this.cost;
	}
	private static void order(List<package_problem> packages) {

	    Collections.sort(packages, new Comparator<package_problem>() {
	    	@Override
	        public int compare(package_problem o1, package_problem o2) {

	            double x1 = ((package_problem) o1).getcost();
	            double x2 = ((package_problem) o2).getcost();

	            if (x1<x2) {
	               return -1;
	            }
	            else if(x1>x2){
	            	return 1;
	            }
	            else {
	               double x3 = ((package_problem) o1).getweight();
	               double x4 = ((package_problem) o2).getweight();
	               if(x3<x4){
	            	   return 1;
	               }
	               else if(x3>x4){
	            	   return -1;
	               }
	               else
	            	   return 0;
	            }
	    }});
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		List<package_problem> packages=new ArrayList<package_problem>();
		BufferedReader scanner = new BufferedReader(new InputStreamReader(System.in));
		double maxWeight=0;
		List<Integer> packageId=new ArrayList<Integer>();
		try {
			String[] input=scanner.readLine().split(" ");
			maxWeight=Integer.parseInt(input[0]);
			for(int i=2;i<input.length;i++){
				String array1[]=input[i].replaceAll("[()$]", "").split(",",3);
			        	packages.add(new package_problem(Integer.parseInt(array1[0]),Double.parseDouble(array1[1]),Double.parseDouble(array1[2])));
			}
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		order(packages);
		for(int i=packages.size()-1;i>=0;i--){
//			System.out.println(packages.get(i).getindex() + "," + packages.get(i).getweight() + ',' + packages.get(i).getcost());
			if(maxWeight>packages.get(i).getweight()){
				packageId.add(packages.get(i).getindex());
				maxWeight-=packages.get(i).getweight();
			}
		}
		packageId.sort(null);
		if(packageId.size()==0){
			System.out.println("-");
		}
		else{
			boolean isFirst=true;
			for(int id:packageId){
				if(isFirst){
					System.out.print(id);
					isFirst=false;
				}
				else{
					System.out.print("," + id);
				}
			}
			
		}
	}
}

/*
 * Please provide the input in the below format
 * 156 : (1,90.72,$13) (2,33.80,$40) (3,43.15,$10) (4,37.97,$16) (5,46.81,$36) (6,48.77,$79) (7,81.80,$45) (8,19.36,$79) (9,6.76,$64) (10,46.81,$36) (11,48.77,$79) (12,81.80,$45) (13,19.36,$79) (14,6.76,$64)
 * i.e., each tuple must be separated by space and also the weight limit and colon .
 */
/*
You want to send your friend a package with different things.
Each thing you put inside the package has such parameters as index number, weight and cost.
The package has a weight limit.
Your goal is to determine which things to put into the package so that the total weight is less than or equal to the package limit and the total cost is as large as possible.

You would prefer to send a package which weights less in case there is more than one package with the same price.

INPUT SAMPLE:

Your program should accept as its first argument a path to a filename. The input file contains several lines. Each line is one test case.

Each line contains the weight that the package can take (before the colon) and the list of things you need to choose. Each thing is enclosed in parentheses where the 1st number is a thing's index number, the 2nd is its weight and the 3rd is its cost.
*/
