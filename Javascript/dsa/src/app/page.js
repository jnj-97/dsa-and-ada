import Image from 'next/image'

export default function Home() {
  return (
   <>
   <header className="bg-blue-500 p-4">
    <nav className='flex space-x-4'>
      <div>
        <h1 className='text-xl'>Data Structures and Algorithms</h1>
      </div>
      <div className='border-2 text-white p-4 border-blue-300 rounded-lg'><a href="#">Program 1</a></div>
    </nav>
    </header>
    </>
  )
}
